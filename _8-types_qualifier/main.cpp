/////////////////////////////////////
/* Ex_1
#include <iostream>

void sayHello();

int main() {
  sayHello();

  return 0;
}

void sayHello() {
  for (int i = 0; i < 3; i++) {
    static int alpha = 0;
    alpha++;
    std::cout << "Static int alpha : " << alpha << std::endl;

    volatile int bravo = 0;
    bravo++;
    std::cout << "volatile int bravo : " << bravo << std::endl;

    auto charlie = 0;
    charlie++;
    std::cout << "auto charlie : " << charlie << std::endl;

    const int delta = 0;
    // delta++; //You cannot change this value cause of constant
    std::cout << "const int delta : " << delta << std::endl;

    std::cout << "************************" << std::endl;
  }
} */
/////////////////////////////////////
/* Ex_2
#include <iostream>

int main() {
  int *dynamicInt = new int;

  *dynamicInt = 42;

  std::cout << "Dynamically allocated int: " << *dynamicInt << std::endl;

  delete dynamicInt;

  std::cout << "Dynamically allocated int: " << *dynamicInt << std::endl;

  return 0;
} */
/////////////////////////////////////
/* Ex_3
#include <iostream>

namespace Alpha {
int val_1 = 7;

namespace Romeo {
int val_2 = 13;
}
} // namespace Alpha

namespace Juliet {
int val_3 = 27;
}

int main() {
  using namespace Alpha;
  using namespace Juliet;

  std::cout << "val_1 = " << val_1 << std::endl;
  std::cout << "val_2 = " << Romeo::val_2 << std::endl;
  std::cout << "val_3 = " << val_3 << std::endl;

  return 0;
} */
/////////////////////////////////////
/* Ex_4
#include <iostream>

namespace Mathematics {
namespace Geometry {

double calculateRectangleArea(double width, double height) {
  return width * height;
}

double calculateCircleArea(double radius) {
  return 3.14159265359 * radius * radius;
}
} // namespace Geometry

namespace Algebra {
int add(int a, int b) { return a + b; }

int subtract(int a, int b) { return a - b; }
} // namespace Algebra
} // namespace Mathematics

int main() {
  double rectArea = Mathematics::Geometry::calculateRectangleArea(4.0, 5.0);
  double circleArea = Mathematics::Geometry::calculateCircleArea(3.0);

  int sum = Mathematics::Algebra::add(10, 5);
  int difference = Mathematics::Algebra::subtract(10, 5);

  std::cout << "Rectangle Area: " << rectArea << std::endl;
  std::cout << "Circle Area: " << circleArea << std::endl;
  std::cout << "Sum: " << sum << std::endl;
  std::cout << "Difference: " << difference << std::endl;

  return 0;
} */
/////////////////////////////////////
/* Ex_5
#include <iostream>

namespace Mathematics {
namespace Geometry {

double calculateRectangleArea(double width, double height) {
  return width * height;
}

double calculateCircleArea(double radius) {
  return 3.14159265359 * radius * radius;
}
} // namespace Geometry

namespace Algebra {
int add(int a, int b) { return a + b; }

int subtract(int a, int b) { return a - b; }
} // namespace Algebra
} // namespace Mathematics

int main() {
  double rectArea = Mathematics::Geometry::calculateRectangleArea(4.0, 5.0);
  double circleArea = Mathematics::Geometry::calculateCircleArea(3.0);

  int sum = Mathematics::Algebra::add(10, 5);
  int difference = Mathematics::Algebra::subtract(10, 5);

  std::cout << "Rectangle Area: " << rectArea << std::endl;
  std::cout << "Circle Area: " << circleArea << std::endl;
  std::cout << "Sum: " << sum << std::endl;
  std::cout << "Difference: " << difference << std::endl;

  return 0;
} */