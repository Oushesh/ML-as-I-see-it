## Reference:
   https://www.geeksforgeeks.org/smart-pointers-cpp/

## Pointers vs Normal Pointers in C++
   * Smart Pointers in C++ and How to Use Them.


## Smart Pointers
   * Why: When a pointer is declared for the "new" object:
     there is a memory allocated for the object. Unless the
     delete for the pointer is used, the memory for the object
     is not freed and we may have a memory leak. That's where Smart
     pointers come into play. It frees or destroys allocated object
     automatically.
     (Smart pointer = pointer + operator overload) #
     e.g. destruction of allocated memory.

   * How:

## The types:
    1. unique_ptr --> stores 1 pointer only. We cannot assign a different object by removing the current object from the pointer.

  ![unique_ptr](uniquePtr.png)

    2. shared_ptr -->  

  3. weak_ptr -->
