///////////////////////////////////////////////////
/*-----------------------------------------------
// CPP Functions

    sum, substract, multiply, divide
    -function definition
    -choices
-------------------------------------------------*/
///////////////////////////////////////////////////
#include <iostream>

int sum                 ();
int substract           ();
int multiply            ();
int devide              ();
void displayOperations  ();

enum OperationCodes {
    sumOp           = 1,
    substractOp     = 2,
    multiplyOp      = 3,
    devideOp        = 4,
    ExitOp          = 5,
};

int main () {
    int choise = 0;

    while (choise != ExitOp) {
        std::cout << "Please desired operation: \n";
        displayOperations ();
        std::cin >> choise;

        switch(choise) {
            case sumOp:
                sum();
            break;
            case substractOp:
                substract();
            break;
            case multiplyOp:
                multiply();
            break;
            case devideOp:
                devide();
            break;
            case ExitOp:
            break;
            default:
            std::cout << "Please enter a valid value!" << std::endl;
            break;
        }
    }
    return 0;
}

int sum () {
    std::cout << "Two integers numbers: ";
    int a, b;
    std::cin >> a >> b;
    std::cout << "The sum of two variables: " << (a + b) <<std::endl;

    return a + b;
}

int substract (){
    std::cout << "Two integers numbers: ";
    int a, b;
    std::cin >> a >> b;
    std::cout << "The substract of two variables: " << (a - b) <<std::endl;

    return a - b;
}

int multiply (){
    std::cout << "Two integers numbers: ";
    int a, b;
    std::cin >> a >> b;
    std::cout << "The multiply of two variables: " << (a * b) <<std::endl;

    return a * b;
}

int devide (){
    std::cout << "Two integers numbers: ";
    int a, b;
    std::cin >> a >> b;
    std::cout << "The devide of two variables: " << (a / b) <<std::endl;

    return a / b;
}

void displayOperations (){
    std::cout << "Sum for 1" << std::endl;
    std::cout << "Substract for 2" << std::endl;
    std::cout << "Multiply for 3" << std::endl;
    std::cout << "Devide for 4" << std::endl;
    std::cout << "Exit2 for 5" << std::endl;
}
