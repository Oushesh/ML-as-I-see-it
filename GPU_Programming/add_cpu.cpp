#include <iostream>
#include <math.h>

//Function to add the elements of 2 arrays

void add(int n, float *x, float *y)
{
  for (int i=0;i<n;i++)
}


int main()
{
  int N = 1<<20; //1M elements

  float *x = new float[N];
  float *y = new float[N];

  //initialize x and y arrays on the host
  for (int i=0;i<N;i++)
  {
    x[i]=1.0f;
    y[i]=2.0f;
  }

  // Run Kernel on 1M elements on the CPU
  add(N,x,y);

  //Free memory
  delete [] x;
  delete [] y;
  return 0;
}
