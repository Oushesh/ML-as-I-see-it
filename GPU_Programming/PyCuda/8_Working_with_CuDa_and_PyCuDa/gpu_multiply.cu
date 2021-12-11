//gpu_multiply.cu

#include <iostream>

#define N 500000000
#define THREDS_PER_BLCOCK 1024

/*
GPU Kernel Function to multiply 2
array elements and also update the results
on the second array
*/

//This is usually called the kernel
__global__ void multiply()
{
  int index = threadIdx.x + blockIdx.x*blockDim.x;
  if (index<n)
  {
    q[index]=p[index]*q[index];
  }
}

int main()
{
  double *p,*q; //host copies of p,q
  double *gpu_p,*gpu_q;//device copies or gpu copies of p,q

  //cudaMalloc
  cudaMalloc((void**)&gpu_p,size);
  cudaMalloc((void**)&gpu_q,size);


  //Allocate CPU/host copies of p,q
  p = (double *)malloc(size);
  q = (double *)malloc(size);

  //After allocating memory for the CPU/host
  //copies, let's now assign 2 values for both
  //arrays. The "cudaMempyHostToDevice" function
  //transfers host data to device:


  //Setup input values

  for (int i=0;i<N;i++)
  {
    p[i]=24.0;
    q[i]=12.0;

    //Copy inputs to device
    
  }
}
