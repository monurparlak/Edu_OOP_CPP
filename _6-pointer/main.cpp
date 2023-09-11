/////////////////////////////////////
/* Ex_1
#include <cstdio>
#include <iostream>

int main() {
  char delta = 'a';
  int whiskey = 13;
  double romeo = 26.123;

  std::cout << "delta    : " << delta << std::endl;
  std::cout << "whiskey : " << whiskey << std::endl;
  std::cout << "romeo  : " << romeo << std::endl << std::endl;

  std::cout << "Size of delta    : " << sizeof(char) << std::endl;
  std::cout << "Size of whiskey : " << sizeof(int) << std::endl;
  std::cout << "Size of romeo  : " << sizeof(double) << std::endl
            << std::endl;

  std::cout << "Address of delta    : " << &delta << std::endl;
  std::cout << "Address of whiskey : " << &whiskey << std::endl;
  std::cout << "Address of romeo  : " << &romeo << std::endl;

  return 0;
} */
/////////////////////////////////////
/* Ex_2
#include <cstdio>
#include <iostream>

int main() {
  int hotel = 5; // 4 byte
  int *hotelptr; // 4 byte

  double oscar = 11.1612; // 8 byte
  double *oscarptr;       // 8 byte

  hotelptr = &hotel;
  oscarptr = &oscar;

  std::cout << "hotel: " << hotel << std::endl; // Masked pointer
  std::cout << "hotelptr value: " << *hotelptr << std::endl;

  std::cout << "oscar: " << oscar << std::endl; // Masked pointer
  std::cout << "oscarptr value: " << *oscarptr << std::endl;

  return 0;
} */
/////////////////////////////////////
/* Ex_3
#include <cstdio>
#include <iostream>

int main() {
  int hotel = 5; // 4 byte
  int *hotelptr; // 4 byte

  double oscar = 11.1612; // 8 byte
  double *oscarptr;       // 8 byte

  hotelptr = &hotel;
  oscarptr = &oscar;

  std::cout << "hotel: " << hotel << std::endl; // Masked pointer
  std::cout << "hotelptr value: " << *hotelptr << std::endl;

  std::cout << "oscar: " << oscar << std::endl; // Masked pointer
  std::cout << "oscarptr value: " << *oscarptr << std::endl;

  return 0;
} */
/////////////////////////////////////
/* Ex_4
#include <cstdio>
#include <iostream>

#define counter 10

int main() {
  int alpha = 5;
  int *alphaptr;

  alphaptr = &alpha;

 for(int i = 0; i < counter; i ++){
    std::cout << "alpha value/address: " << alpha + i << " / " << alphaptr + i
<< std::endl;
   }

  return 0;
} */
/////////////////////////////////////
/* Ex_5
#include <cstring>
#include <iostream>

int main() {
    std::string str = "foxtrot";
    char targetChar = 't';

    for (char& c : str) {
        if (c == targetChar) {
            uintptr_t address = reinterpret_cast<uintptr_t>(&c);
            std::cout << "'0x" << std::hex << address << "'";
        } else {
            std::cout << "'" << c << "'";
        }
    }
    std::cout << std::endl;

    return 0;
} */
/////////////////////////////////////
/* Ex_6
#include <cstring>
#include <iostream>

#define OSCAR_VAL 10
#define ZULU_VAL 20

int main() {
  int oscar = OSCAR_VAL;
  int zulu = ZULU_VAL;

  int *oscarptr = &oscar;
  int *zuluptr = &zulu;

  int *temp = oscarptr;
  oscarptr = zuluptr;
  zuluptr = temp;

  // *oscarptr = *oscarptr + *zuluptr;
  // *zuluptr = *oscarptr  - *zuluptr;
  // *oscarptr = *oscarptr - *zuluptr;

  std::cout << "OSCAR = " << oscar << ", ZULU = " << zulu << std::endl;

  std::cout << "OSCAR = " << *oscarptr << ", ZULU = " << *zuluptr << std::endl;

  return 0;
} */
/////////////////////////////////////
/* Ex_7
#include <cstring>
#include <iostream>

#define INDIA_SIZE 3

    void indiaInit(int *, int);
void indiaConfig(int *, int);

int main() {
  int india[INDIA_SIZE] = {5, 7, 13};

  indiaInit(india, INDIA_SIZE);
  indiaConfig(india, INDIA_SIZE);

  return 0;
}

void indiaInit(int *arrayptr, int arrayptr_size) {
  *(arrayptr + 0) = 3;
  *(arrayptr + 1) = 6;
  *(arrayptr + 2) = 7;
}

void indiaConfig(int *arrayptr, int arrayptr_size) {
  int *lastArrayptr = arrayptr + arrayptr_size;
  int i = 0;

  while (arrayptr < lastArrayptr) {
    std::cout << "a[" << i << "]: " << *arrayptr << std::endl;

    arrayptr++;
    i++;
  }
} */
/////////////////////////////////////
/* Ex_8 */
#include <cstdio>
#include <iostream>

int main() {
  std::cout << "" << std::endl;
  return 0;
}