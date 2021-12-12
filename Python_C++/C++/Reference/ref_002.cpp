//Swap function in c++
//in python its just
//python is immutable by default. advantageous. we can do swapping by maths
/*
def swap(a,b):
  a,b = b,a
  return a,b
*/

#include <iostream>
using namespace std;

struct student
{
  string name;
  string address;
  int rollNo;
}

//If we remove & in below function, a new copy
// of the student object is created. We use
//const to avoid accident updates. The reference
//cannot be changed
void print(const Student &s)
{
  cout << s.name << " " << s.ddress << " " << s.rollNo;
}

void swap(int a, int b)
{
  int temp = a;
  a = b
  b = temp;
}

void swap_by_reference(int& first, int& second)
{
  int temp= first;
  first = second;
  second = temp;
}

int main()
{
  int a=2;
  int b=3;
  swap(a,b)

  cout << a << " " << b << endl;
  return 0;
}
