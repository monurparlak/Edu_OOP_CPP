/*-----------------------------------------------
// Basic Data Types

// Primary built-in types
1- Boolean/Bool     -->> bool    -->> true/false, 1/0
2- Character        -->> chart   -->> 1, a, c, &
3- Integer          -->> int     -->> 1, 77, 124
4- Floating point   -->> float   -->> 1.2, 25.41
5- Double f point   -->> double  -->> 1.234521
6- Valueless        -->> void    -->> valueless()

// Usable fundamental types
1- signed   -->> 16 or 32 bytes
2- unsigned -->> 16 or 32 bytes
3- short    -->> 16 bytes
4- long     -->> 32 or 64 bytes

// Class
1- Struct   -->> variable
2- Class    -->> variable and functions

1- Object   -->> Has states (variable) and behaviour (function)
artos.name
artos.getPoint()
2- Class             -->> Template describing function and state
3- Method            -->> Function (behaviour)
4- Instance variable -->> artos

-------------------------------------------------*/
/*Exercises_1
#include <iostream> 

int main() {
    std::cout<< "Size of int -->> " << sizeof(int) << std::endl;
    std::cout<< "Size of char -->> " << sizeof(char) << std::endl;
    std::cout<< "Size of float -->> " << sizeof(float) << std::endl;
    std::cout<< "Size of double -->> " << sizeof(double) << std::endl;
    
    system("pause");
    return 0;
}
*/
/*Exercises_2
#include <iostream>

typedef float value; // Types can be renamed

int main() {
    float first_value;
    value secont_value;

    first_value = 1.2;
    secont_value = 3.4;

    std::cout<< "first_value -->> " << first_value << std::endl;
    std::cout<< "second_value -->> " << secont_value << std::endl;

    system("pause");
    return 0;
}
*/
/*Exercises_3
#include <iostream>

enum colorUnit {            // Variables can be renamed
    red     = 100,          // Integer
    green   = 200,          // Integer
    blue    = 300           // Integer
}colorUnit_t;

int main() {
    std::cout<< "Red type value : " << red << std::endl;
    std::cout<< "Green type value : " << green << std::endl;
    std::cout<< "Blue type value : " << blue << std::endl;
    
    system("pause");
    return 0;
}
*/
/*Exercises_4
#include <iostream>

// Variables can be renamed
struct colorUnit {            
    int red;        // Integer
    int green;      // Integer
    int blue;       // Integer

    float value_1;  // Float
    float value_2;  // Float
    float value_3;  // Float
}colorUnit_t;

struct Student {
    char name;      // char
    char id;        // char

    int age;        // integer
}student_t;
student_t student;

int main() {

    student.name = "Mustafa";
    student.id   = 1526;
    student.age  = 26;

    std::cout<< "Student Name is : " << student.name << std::endl;
    std::cout<< "Student ID is : "   << student.id   << std::endl;
    std::cout<< "Student age : "     << student.age  << std::endl;
    
    system("pause");
    return 0;
}
-------------------------------------------------
///////////////////////////////////////////////////
// Information for the Class
Sturct contains variable
Class contains variable + function

1- Object -->> contains behaves (function) and states (variable)
2- Method -->> function
3- Class  -->> template describing behaves and states
4- Relationship of classes
-------------------------------------------------
///////////////////////////////////////////////////
//Scope - definition
#include <iostream>

int main () { // Function scope
    int a = 1;
    std::cout << "Function = " << a <<std::endl;
    
    { // Internal scope
        int a = 2;
        std::cout << "Internal = " << a <<std::endl;
    }
    std::cout << "Function = " << a <<std::endl;
    
}
-------------------------------------------------
//////////////////////////////////////////////////
// Constant definition

//    Literal -->> number and symbol
//    #define -->> preprocessor
//    const   -->> keyword

#include <iostream>

//-****** DEFINE Preprocessor *******
//#define PI  3.1415
//#define r   10
//-****** DEFINE Preprocessor *******

//-****** CONST Keyword *******
const float PI = 3.1415;
const int r = 10;
//-****** CONST Keyword *******

float area = 0;

int main () {
    area = (float)(PI * r * r);

    std::cout << "Area of the Circle = " << area << std::endl;
}

-------------------------------------------------
//////////////////////////////////////////////////
// Modifier
// some speciffic keywords relation to add before and after to the code
// 1- signed
// 2- unsigned
// 3- short
// 4- Long

#include <iostream>

int main () {
    short int PI;
    short unsigned int r;

    PI  = 3;
    r   = 10;

    int area = (PI * r * r);

    std::cout << "Area of the Circle = " << area << std::endl;
}
-------------------------------------------------
//////////////////////////////////////////////////*/

