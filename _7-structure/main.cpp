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
/* Ex_2 */
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
  carModels_t info;
  char carEngine;
  char carFuel;
};

void carModeUpdate(carTypes_t *carInfo);

int main() {
  carModels_t carModels;

  carTypes_t carCollection;
  carTypes_t *carCollectionptr = &carCollection;

  carModeUpdate(carCollectionptr);

  std::cout << "Car Name: " << carModels.carName << std::endl;
  std::cout << "Car Rate: " << carModels.carRate << std::endl;
  std::cout << "Car Cost: " << carModels.carCost << std::endl;
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
  carInfo->info.carName = Alpha;
  carInfo->info.carRate = 5;
  carInfo->info.carCost = 125.650;
  carInfo->carEngine = 7;
  carInfo->carFuel = Electrical;
}