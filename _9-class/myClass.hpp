#pragma once

#include <iostream>

class myClass {
private:
  int counter = 0;

public:
  static int sCount;
  static int sValue;


  void func() const;
  static void sfunc(); // Just declare it here, no 'static' keyword needed
};

int myClass::sCount = 3;

void myClass::func() const
{
  std::cout << "Test" << myClass::sCount << std::endl;
}

// Define the static member function outside of the class definition
void myClass::sfunc()
{
  std::cout << "sfunc " << std::endl;
}
