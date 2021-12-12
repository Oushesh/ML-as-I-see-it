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

    Example here:
    # add screenshot here.

    2. shared_ptr -->  more than 1 pointer can point to this one object at
    a time and it will maintain a Reference Counter using "use_count()" method.

  ![shared_ptr](shared_ptr.png)

    3. weak_ptr --> its much more similar to shared_ptr except it will not
    maintain a "Reference Counter". In this case, a pointer will not have a
    stronghold on the object. The reason is if suppose pointers are holding
    the object and requesting for other objects then they may form a Deadlock.

    
