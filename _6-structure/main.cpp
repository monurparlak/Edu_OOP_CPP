/////////////////////////////////////
/* Ex_1
#include <iostream>

struct carModels_t {
  char carName;
  int carRate;
  double carCost;
};

// typedef struct carModels_t {
//   char carName;
//   int carRate;
//   double carCost;
// } carModels;

int main() {
  struct carModels_t carModels;
  carModels.carName = 'S';
  // strcpy(carModels.carName, 'S');
  carModels.carRate = 7;
  carModels.carCost = 185.575;

  std::cout << "Car Name: " << carModels.carName << std::endl;
  std::cout << "Car Rate: " << carModels.carRate << std::endl;
  std::cout << "Car Cost: " << carModels.carCost << std::endl;

  return 0;
} */
/////////////////////////////////////
/* Ex_2
#include <iostream>
#include <string>

const int MAX_STUDENTS = 100;
const int MAX_COURSES = 10;

struct Course {
    std::string name;
    int credit;
};

struct Student {
    std::string name;
    int id;
    int numCourses;
    Course* courses[MAX_COURSES];
};

void addCourse(Student& student, const std::string& courseName, int
courseCredit) { if (student.numCourses < MAX_COURSES) { Course* newCourse = new
Course{courseName, courseCredit}; student.courses[student.numCourses] =
newCourse; student.numCourses++; std::cout << courseName << " added to " <<
student.name << "'s courses." << std::endl; } else { std::cout << student.name
<< " has reached the maximum number of courses." << std::endl;
    }
}

void printStudentInfo(const Student& student) {
    std::cout << "Name: " << student.name << std::endl;
    std::cout << "ID: " << student.id << std::endl;
    std::cout << "Courses:" << std::endl;
    for (int i = 0; i < student.numCourses; ++i) {
        std::cout << " - " << student.courses[i]->name << " (Credit: " <<
student.courses[i]->credit << ")" << std::endl;
    }
}

int main() {
    Student students[MAX_STUDENTS];

    Student student1 = {"Alice", 1, 0, {}};
    Student student2 = {"Bob", 2, 0, {}};

    students[0] = student1;
    students[1] = student2;

    addCourse(students[0], "Math", 3);
    addCourse(students[0], "History", 2);
    addCourse(students[1], "Physics", 4);
    addCourse(students[1], "Chemistry", 3);

    std::cout << "Student 1 Info:" << std::endl;
    printStudentInfo(students[0]);

    std::cout << std::endl;

    std::cout << "Student 2 Info:" << std::endl;
    printStudentInfo(students[1]);

    // Belleği temizle
    for (int i = 0; i < students[0].numCourses; ++i) {
        delete students[0].courses[i];
    }

    for (int i = 0; i < students[1].numCourses; ++i) {
        delete students[1].courses[i];
    }

    return 0;
}*/
/////////////////////////////////////
/* Ex_3
#include <iostream>

char Electrical = 'E';
char Diesel = 'D';
char Gasoline = 'G';

char Alpha = 'A';
char Bravo = 'B';
char Charlie = 'C';
struct carModels_t {
  char carName;
  int carRate;
  double carCost;
};

struct carTypes_t {
  carModels_t carModels; // carModels_t türünden bir yapı ekledik
  char carEngine;
  char carFuel;
};

void carModeUpdate(carTypes_t *carInfo);

int main() {
  carTypes_t carCollection;
  carTypes_t *carCollectionptr = &carCollection;

  carModeUpdate(carCollectionptr);

  std::cout << "Car Name: " << carCollection.carModels.carName << std::endl;
  std::cout << "Car Rate: " << carCollection.carModels.carRate << std::endl;
  std::cout << "Car Cost: " << carCollection.carModels.carCost << std::endl;
  std::cout << "Car Engine: " << carCollection.carEngine << std::endl;
  std::cout << "Car Fuel: " << carCollection.carFuel << std::endl << std::endl;

  std::cout << "Car Name: " << carCollectionptr->carModels.carName << std::endl;
  std::cout << "Car Rate: " << carCollectionptr->carModels.carRate << std::endl;
  std::cout << "Car Cost: " << carCollectionptr->carModels.carCost << std::endl;
  std::cout << "Car Engine: " << carCollectionptr->carEngine << std::endl;
  std::cout << "Car Fuel: " << carCollectionptr->carFuel << std::endl;

  return 0;
}

void carModeUpdate(carTypes_t *carInfo) {
  carInfo->carModels.carName = Alpha;
  carInfo->carModels.carRate = 5;
  carInfo->carModels.carCost = 125.650;
  carInfo->carEngine = '7';
  carInfo->carFuel = Electrical;
} */
/////////////////////////////////////
/* Ex_4
#include <iostream>
#include <string>
#include <vector>

enum EngineType { ELECTRICAL, DIESEL, GASOLINE };
enum TransmissionType { AUTOMATIC, MANUAL };

struct Engine {
  EngineType type;
  double displacement;
};

struct Transmission {
  TransmissionType type;
  int numberOfGears;
};

struct Car {
  std::string brand;
  std::string model;
  int year;
  Engine engine;
  Transmission transmission;
  double price;
};

struct Dealership {
  std::string name;
  std::vector<Car *> cars;
};

void printCarInfo(const Car &car) {
  std::cout << "Brand: " << car.brand << std::endl;
  std::cout << "Model: " << car.model << std::endl;
  std::cout << "Year: " << car.year << std::endl;
  std::cout << "Engine Type: ";
  switch (car.engine.type) {
  case ELECTRICAL:
    std::cout << "Electrical";
    break;
  case DIESEL:
    std::cout << "Diesel";
    break;
  case GASOLINE:
    std::cout << "Gasoline";
    break;
  }
  std::cout << std::endl;
  std::cout << "Displacement: " << car.engine.displacement << " L" << std::endl;
  std::cout << "Transmission Type: ";
  switch (car.transmission.type) {
  case AUTOMATIC:
    std::cout << "Automatic";
    break;
  case MANUAL:
    std::cout << "Manual";
    break;
  }
  std::cout << std::endl;
  std::cout << "Number of Gears: " << car.transmission.numberOfGears
            << std::endl;
  std::cout << "Price: $" << car.price << std::endl;
}

int main() {
  Car car1 = {"Toyota",        "Camry",        2023,
              {GASOLINE, 2.5}, {AUTOMATIC, 8}, 30000.0};
  Car car2 = {"Tesla",         "Model 3",      2023,
              {ELECTRICAL, 0}, {AUTOMATIC, 1}, 45000.0};
  Car car3 = {"Ford", "Mustang", 2023, {GASOLINE, 5.0}, {MANUAL, 6}, 55000.0};

  std::vector<Car> carList = {car1, car2, car3};

  Dealership dealership1 = {"ABC Motors", {}};
  dealership1.cars.push_back(&car1);
  dealership1.cars.push_back(&car2);

  Dealership dealership2 = {"XYZ Motors", {}};
  dealership2.cars.push_back(&car3);

  for (const Car &car : carList) {
    printCarInfo(car);
    std::cout << std::endl;
  }

  std::cout << "Dealership: " << dealership1.name << std::endl;
  std::cout << "Cars:" << std::endl;
  for (Car *carPtr : dealership1.cars) {
    printCarInfo(*carPtr);
    std::cout << std::endl;
  }

  std::cout << "Dealership: " << dealership2.name << std::endl;
  std::cout << "Cars:" << std::endl;
  for (Car *carPtr : dealership2.cars) {
    printCarInfo(*carPtr);
    std::cout << std::endl;
  }

  return 0;
} */
/////////////////////////////////////
/* Ex_5
#include <iostream>
#include <string>
#include <vector>

enum EngineType { ELECTRICAL, DIESEL, GASOLINE };
enum TransmissionType { AUTOMATIC, MANUAL };

struct Engine {
  EngineType type;
  double displacement;
};

struct Transmission {
  TransmissionType type;
  int numberOfGears;
};

struct Car {
  std::string brand;
  std::string model;
  int year;
  Engine engine;
  Transmission transmission;
  double price;
};

struct Dealership {
  std::string name;
  std::vector<Car *> cars;
};

void printCarInfo(const Car &car) {
  std::cout << "Brand: " << car.brand << std::endl;
  std::cout << "Model: " << car.model << std::endl;
  std::cout << "Year: " << car.year << std::endl;
  std::cout << "Engine Type: ";
  switch (car.engine.type) {
  case ELECTRICAL:
    std::cout << "Electrical";
    break;
  case DIESEL:
    std::cout << "Diesel";
    break;
  case GASOLINE:
    std::cout << "Gasoline";
    break;
  }
  std::cout << std::endl;
  std::cout << "Displacement: " << car.engine.displacement << " L" << std::endl;
  std::cout << "Transmission Type: ";
  switch (car.transmission.type) {
  case AUTOMATIC:
    std::cout << "Automatic";
    break;
  case MANUAL:
    std::cout << "Manual";
    break;
  }
  std::cout << std::endl;
  std::cout << "Number of Gears: " << car.transmission.numberOfGears
            << std::endl;
  std::cout << "Price: $" << car.price << std::endl;
}

int main() {
  Car car1 = {"Toyota",        "Camry",        2023,
              {GASOLINE, 2.5}, {AUTOMATIC, 8}, 30000.0};
  Car car2 = {"Tesla",         "Model 3",      2023,
              {ELECTRICAL, 0}, {AUTOMATIC, 1}, 45000.0};
  Car car3 = {"Ford", "Mustang", 2023, {GASOLINE, 5.0}, {MANUAL, 6}, 55000.0};

  std::vector<Car> carList = {car1, car2, car3};

  Dealership dealership1 = {"ABC Motors", {}};
  dealership1.cars.push_back(&car1);
  dealership1.cars.push_back(&car2);

  Dealership dealership2 = {"XYZ Motors", {}};
  dealership2.cars.push_back(&car3);

  for (const Car &car : carList) {
    printCarInfo(car);
    std::cout << std::endl;
  }

  std::cout << "Dealership: " << dealership1.name << std::endl;
  std::cout << "Cars:" << std::endl;
  for (Car *carPtr : dealership1.cars) {
    printCarInfo(*carPtr);
    std::cout << std::endl;
  }

  std::cout << "Dealership: " << dealership2.name << std::endl;
  std::cout << "Cars:" << std::endl;
  for (Car *carPtr : dealership2.cars) {
    printCarInfo(*carPtr);
    std::cout << std::endl;
  }

  return 0;
} */
