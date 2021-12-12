/*
The code below will describe some of the
problem of a normal pointer
*/

#include <iostream>
using namespace std;

class Rectangle
{
public:
  int length;
  int breadth;
create()
{
  //Take a pointer and create a new object of rectangle type
  //Rectangle p = new Rectangle();
}
};

int main()
{
  //infinite loop
  while (1)
  {
    Rectangle* AB = new Rectangle();
    AB->create();
  }
}

//There aee 2 ways to do this. one elegant way is to create
//via the constructor the other way is through the void function.
