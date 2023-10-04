#pragma once

#include <iostream>

class myClass_2 {
private:
  static int sCounter;

public:
  myClass_2();
  ~myClass_2();
  static int getCounter();
};

int myClass_2::sCounter = 0;

myClass_2::myClass_2()
{
  myClass_2::sCounter++;
}
myClass_2::~myClass_2()
{
  myClass_2::sCounter--;
}

int myClass_2::getCounter()
{
  return myClass_2::sCounter;
}