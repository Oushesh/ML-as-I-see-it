#include <iostream>

using namespace std;

class SmartPtr
{
  int* ptr;
public:
  //Explicit: https:// www.geeksforgeeks.org/g-fact-93/
  explicit SmartPtr(int* p=NULL)
  {
    ptr=p;
  }
  //Destructor
  ~SmartPtr()
  {
    delete (ptr);
  }
  int& operator*()
  {
    return *ptr;
  }
};

int main()
{
  SmartPtr(new int());
  *ptr = 20;
  cout << *ptr;

  //We dont need to call delete ptr:
  //ptr goes out of scope, the destructor for it is automatically
  //called and destructor does delete ptr.
  return 0;
}
