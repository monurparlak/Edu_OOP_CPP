#include <iostream>

int main () {

    int array[10];
    int i = 0;
    /*
    for (int i = 0; i < 10; i++) {
        array[i] = 1;
    }
    */
    /*
    while (i < 10) {
        array[i] = i;
        i = i + 1;
    }
    */

    while (i < 10) {
        array[i++] = i;
    }

    for (int i = 0; i < 10; i++) {
        std::cout << "Array [" << i << "] : " << array[i] << std::endl;
    }

    //std::cout << array[360] << std::endl;
    //std::cout << array[10] << std::endl;
       
}