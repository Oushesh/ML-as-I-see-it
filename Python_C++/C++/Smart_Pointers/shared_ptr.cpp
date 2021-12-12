#include <iostream>
using namespace std;
#include <memory>

//C++ 14 code


class Rectangle
{
  int length;
  int breadth;
public:
  Rectangle(int l, int b)
  {
    length = l;
    breadth = b;
  }
  int aread()
  {
    return length*breadth;
  }
};

int main()
{
  shared_ptr<Rectangle> P1(new Rectangle(10,5));
  //THis will print 50
  cout << P1->area()<<endl;

  shared_ptr<Rectangle> P2;
  P2=P1;  //For the shared pointer one can assign the previous pointer P1 to the new one.

  //This will print 50 as well.
  cout << P2->area << endl;

  //At this point both the pointers, P1 and P2 point to the same object "Rectangle" created.
  //Any of the 2 pointers can be used.

  cout << P1.use_count() << endl; //use_count will tell the number of pointers pointing to
  //the common object Rectangle

  return 0;
}
