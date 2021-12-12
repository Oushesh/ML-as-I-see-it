/*
As we’ve known unconsciously not deallocating a pointer causes a memory leak that may lead to crash of the program. Languages Java, C# has Garbage Collection Mechanisms
to smartly deallocate unused memory to be used again. The programmer doesn’t have to worry about any memory leak. C++11 comes up with its own mechanism that’s Smart Pointer.
When the object is destroyed it frees the memory as well. So, we don’t need to delete it as Smart Pointer does will handle it.

A Smart Pointer is a wrapper class over a pointer with an operator like * and -> overloaded. The objects of the smart pointer class look like normal pointers. But,
unlike Normal Pointers it can deallocate and free destroyed object memory.

The idea is to take a class with a pointer, destructor and overloaded operators like * and ->. Since the destructor is automatically called when an object goes out of scope,
the dynamically allocated memory would automatically be deleted (or reference count can be decremented).

Consider the following simple SmartPtr class.
*/
#include <iostream>
using namespace std;

class SmartPtr
{
  int* ptr; //actual pointer
public:
  //check why we used explicit from here:
  explicit SmartPtr(int* p = NULL)
  {
    ptr = p;
  }

  //Destructor
  ~SmartPtr()
  {
    delete (ptr);
  }

  //overloading and dereferencing
  int& operator*()
  {
    return *ptr;
  }
};

int main()
{
  SmartPtr ptr(new int());
  *ptr = 20;
  cout << *ptr << endl;
  return 0;
}
