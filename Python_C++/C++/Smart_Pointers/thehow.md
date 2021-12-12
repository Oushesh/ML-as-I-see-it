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

      
