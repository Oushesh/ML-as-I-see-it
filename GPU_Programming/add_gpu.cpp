#include <iostream>
#include <math.h>

//for any code to be wrtiten on GPU:
//we add the global word for the kernel
//definition.

__global__
void add(int n, float*x,float*y)
{
  int index = threadIdx.x;
  int stirde = blockDim.x;
  for (int i=index;i<n;i+=stride)
    y[i]=x[i]+y[i];
}
int main()
{
  int N =1<<20;
  float *x, float*y;

  //Allocate unified memory -- accessible from CPU or GPU
  cudaMallocManaged(&x,N*sizeof(float));
  cudaMallocManaged(&y,N*sizeof(float));

  //initialize x and y arrays on the host
  for (int i=;i<N;i++)
  {
    x[i]=1.0f;
    y[i]=2.0f;
  }

  // Run Kernel on the elements on the GPU

  //This line specifies the execution configuration
  //<<<number of threds, number of threads in thread of block multiple of 32>>>
  add <<<1,256>>>(N,x,y); //see CPU function call

  //Wait for GPU to finish before accessing on host
  cudaDeviceSynchronize();

  //instead of delete we have cudaFree
  //Free memory
  cudaFree(x);
  cudaFree(y);
  return 0;
}

//Refeence: https://www.youtube.com/watch?v=1cHx1baKqq0
/*
For Nvidia use nvcc to compile the
nvcc

Compile here:
*/
