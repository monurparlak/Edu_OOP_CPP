///////////////////////////////////////////////////
/*-----------------------------------------------
//new & delete in C++?

new ==>> request for memory allocation in heap
delete ==>> erase that memory

new (malloc, calloc, realloc, ...) so dynamic memory allocations
delete (free)
-------------------------------------------------*/
///////////////////////////////////////////////////
#include <iostream>

//using namespace std;

int main()                                      // General address where program executes
{                                               // Scope

    int *ptr1 = NULL;
    ptr1 = new int;

    *ptr1 = 10;

    std::cout<< "*ptr1 : " << *ptr1 << std::endl;

    delete ptr1;

    return 0
}