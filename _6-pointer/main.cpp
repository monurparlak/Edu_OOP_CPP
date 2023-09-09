/////////////////////////////////////
/* Ex_1
#include <cstdio>
#include <iostream>

int main() {
  char dummyCharVal = 'a';
  int dummyIntegerVal = 13;
  double dummyDoubleVal = 26.123;

  std::cout << "dummyCharVal    : " << dummyCharVal << std::endl;
  std::cout << "dummyIntegerVal : " << dummyIntegerVal << std::endl;
  std::cout << "dummyDoubleVal  : " << dummyDoubleVal << std::endl << std::endl;

  std::cout << "Size of dummyCharVal    : " << sizeof(char) << std::endl;
  std::cout << "Size of dummyIntegerVal : " << sizeof(int) << std::endl;
  std::cout << "Size of dummyDoubleVal  : " << sizeof(double) << std::endl
            << std::endl;

  std::cout << "Address of dummyCharVal    : " << &dummyCharVal << std::endl;
  std::cout << "Address of dummyIntegerVal : " << &dummyIntegerVal << std::endl;
  std::cout << "Address of dummyDoubleVal  : " << &dummyDoubleVal << std::endl;

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
/* Ex_4 */
#include <cstdio>
#include <iostream>

int main() {
  std::cout << "" << std::endl;
  return 0;
}