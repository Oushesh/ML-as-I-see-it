//Same as the first one but with a different style of writing
//not my favourite thought

#include <iostream>
using namespace std;

class Rectangle
{
private:
  int length;
  int breadth;
};


//This function just initiliases a pointer to create a Rectangle object
void creator()
{
  Rectangle * p = new Rectangle();
}


int main()
{
  //inifinite loop
  while (1)
  {
    creator();
  }
}
