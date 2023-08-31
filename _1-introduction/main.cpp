///////////////////////////////////////////////////
/*-----------------------------------------------
// Why is C++ preferred?
1- It works with addressing that close to hardware.
2- CPP enables High/Low programming through OOP applications.
3- OOP and Hardware programming because of its speed.

// Overview
1- C++ includes both low/high programming levels.
2-  Since it was created after C, C++ also incorporates the C programming language features.

// OOP (Object Oriented Programming)
1- Enscapsulation, inheritance, ploymorphism included CPP

// Standard Libraries
1- The main building block language for variables
2- Application competence for arrays, data, pointers and files
3- Support in the field of data structures (STL)

// ANSI Standard (Availability on all systems)

-------------------------------------------------*/
/////////////////////////////////////////////////// 
#include <iostream>     // C++ Programming library
#include <stdio.h>      // C Programming library
#include <cstdio>       // C++ Programming library

//using namespace std;

int main()                                      // General address for program executes
{                                               // Scope
    std::cout<< "Hello CPP!" << std::endl; // CPP serial print
    printf("Hello C!\n");                  // C serial print
    
    return 0;
}