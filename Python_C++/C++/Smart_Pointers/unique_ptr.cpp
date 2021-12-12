#include <iostream>
#include <memory>
using namespace std;

//This is deemed to show the concept of smart pointers: subcategorised into
//different ones: uniquePtr, shared_ptr, weak_ptr

/*
The unique one is one which can refer to only 1 object.
So a second pointer has to be moved to point to the same
See the example below.
*/

class Rectangle
{
  int length;
  int breadth;
public:
  Rectangle (int l, int b)
  {
    length = l;
    breadth= b;
  }

  int area()
  {
    return length*breadth;
  }
}

int main()
{
  unique_ptr <Rectangle> P1 (new Rectangle(10,5));
  cout << P1->area() << endl; //THis will print 50

  //unique_ptr<Rectangle> P2(P1);
  unique_ptr <Rectangle> P2;
  P2 = move(P1); //This command dereference the pointer P1 to Rectangle instead

  //This will print 50;
  cout << P2->area()<< endl;
  //cout << P2->area() << endl;
  return 0;
}
