#include <iostream>
#include <cstdio>
#include <ctime>
#include <math.h>
#define N 5000000
//500 M elements


//This is a function to multiply 2 array elements
//and also update the results on the second array

using namespace std;
void multiply(int n, double *p,double*q)
{
  for (int i=0;i<n;i++)
  {
    q[i]=p[i]*q[i];
  }
}

int main()
{
  float cpu_time_used;
  double *p = new double[N];
  double *q = new double[N];

  std::clock_t begin,end;

  //initialize arrays p and q on the host
  for (int i=0;i<N;i++)
  {
    p[i]=24.0;
    q[i]=12.0;
  }

  begin = clock();
  multiply(N,p,q);
  end = clock();
  cpu_time_used = ((double)(end-begin))/CLOCKS_PER_SEC;

  //Verifying all values to be 288.0
  //fabs(q[i]-288) (absolute value) should be 0
  double maxError = 0.0;
  for (int i=0;i<N;i++)
  {
    maxError = fmax(maxError, fabs(q[i]-288.0));
  }

  cout << "Multiply function CPU execution time:" << cpu_time_used << "second(s)"<< endl;
  cout << "Max Error is: "<< maxError << endl;

  //Free Memory
  delete [] p;
  delete [] q;
  return 0;
}
