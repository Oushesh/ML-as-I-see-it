#include <iostream>
using namespace std;

int main()
{
  int x = 10;
  int& ref = x; //reference to x

  ref = 20; //when we change the reference to x to 20, x changes to 20
  cout << "x= " << x < end;

  //Value of x is now change to 30
  x = 30;
  cout << "ref = " << endl;
  return 0;
}
