#include <iostream>

#define N 500000000 //500 Million Elements
#define THREADS_PER_BLOCK 1024

/* GPU kernel function to multiply two array elements and also update the results on the second array
*/
__global__ void multiply(double *p, double *q, unsigned long n) {
  int index = threadIdx.x + blockIdx.x * blockDim.x;
  if (index < n) q[index] = p[index] * q[index];
}

int main(void)
{
  double *p, *q; // host copies of p, q
  double *gpu_p, *gpu_q; // device copies of p, q

  // we need space for N unsigned long integers
  unsigned long size = N * sizeof(unsigned long);
  unsigned long i;

  // Allocate GPU/device copies of gpu_p, gpu_q
  cudaMalloc((void**)&gpu_p, size);
  cudaMalloc((void**)&gpu_q, size);

  // Allocate CPU/host copies of p, q
  p = (double *)malloc(size);
  q = (double *)malloc(size);

  // Setup input values
  for (i = 0; i < N - 1; ++i)
  {
    p[i] = 24.0;
    q[i] = 12.0;
  }

  // Copy inputs to device
  cudaMemcpy(gpu_p, p, size, cudaMemcpyHostToDevice);
  cudaMemcpy(gpu_q, q, size, cudaMemcpyHostToDevice);

  //INITIALIZE CUDA EVENTS
  cudaEvent_t start, stop;
  float elapsedTime;

  //CREATING EVENTS
  cudaEventCreate(&start);
  cudaEventCreate(&stop);
  cudaEventRecord(start, 0);

  /*CUDA KERNEL STUFF HERE...
  Launch multiply() kernel on GPU with N threads
  */
  multiply << <(N + THREADS_PER_BLOCK - 1) / THREADS_PER_BLOCK, THREADS_PER_BLOCK >> >(gpu_p, gpu_q, N);

  //FINISH RECORDING
  cudaEventRecord(stop, 0);
  cudaEventSynchronize(stop);

  //CALCULATE ELAPSED TIME
  cudaEventElapsedTime(&elapsedTime, start, stop);

  //DISPLAY COMPUTATION TIME
  cudaDeviceProp prop;
  int count;
  cudaGetDeviceCount(&count);
  for (int igtx = 0; igtx < count; igtx++)
  {
    cudaGetDeviceProperties(&prop, igtx);
    /*
    printf("The GPU '%s' computed the multiplication table for %d in %f milliseconds", prop.name, n2, elapsedTime);
    printf("\n\nGPU Computation Time = %f ms",elapsedTime);
    */
    printf("\nGPU Device used for computation: %s\n", prop.name);
    printf("\nMultiplication on GPU computed in: %f milliseconds", elapsedTime);
  }

  // Copy device result back to host copy of q
  cudaMemcpy(q, gpu_q, size, cudaMemcpyDeviceToHost);

  // Verifying all values to be 288.0
  // fabs(q[i]-288) (absolute value) should be 0
  double maxError = 0.0;
  for (int i = 0; i < N-1; ++i) maxError = fmax(maxError, fabs(q[i]-288.0));
  std::cout << "\nMax error: " << maxError << std::endl;
  // Clean CPU memory allocations
  free(p); free(q);

  // Clean GPU memory allocations
  cudaFree(gpu_p);
  cudaFree(gpu_q);
  return 0;
}
