/////////////////////////////////////
/* Ex_1
#include <iostream>

int main() {
  //int arr[5];
  //int arr[3] = {1, 2, 3};
  int arr[] = {1, 2, 3};
  std::cout << "1st element: " << arr[0] << std::endl;
} */
/////////////////////////////////////
/* Ex_2
#include <iostream>

int main() {
  int array[5];

  for (int i = 0; i < 5; i++)
    array[i] = 1 + i;

  for (int i = 0; i < 5; i++)
    std::cout << "array[" << i << "]: " << array[i] << std::endl;
}*/
/////////////////////////////////////
/* Ex_3
#include <iostream>

#define SIZE_1 2
#define SIZE_2 2

int main() {
  int array_a[3][3] = {{1, 2}, {3, 4}, {5, 6}};
  int array_b[SIZE_1][SIZE_2] = {{7, 8}, {9, 0}};

  for (int i = 0; i < SIZE_1; i++)
    for (int j = 0; j < SIZE_2; j++)
      std::cout << "array_b[" << i << "][" << j << "]: " << array_b[i][j]
                << std::endl;

  return 0;
} */
/////////////////////////////////////
/* Ex_4
#include <iostream>

#define SIZE 3

int main() {
  int counters[SIZE] = {50, 100, 200};
  int *counters_ptr;

  counters_ptr = counters;

  for (int i = 0; i < SIZE; i++) {
    std::cout << "counters[" << i << "]: " << counters[i] << " - "
              << &counters[i] << std::endl;
  }

  return 0;
} */
/////////////////////////////////////
/* Ex_5
#include <iostream>

int main() {
  int arr1 = 10;
  double arr2 = 12.4;

  int *arr1ptr = &arr1;
  double *arr2ptr = &arr2;

  std::cout << "arr1ptr    : " << arr1ptr << std::endl;
  std::cout << "arr1ptr + 1: " << arr1ptr + 1 << std::endl;
  std::cout << "arr1ptr - 1: " << arr1ptr - 1 << std::endl;

  std::cout << "arr2ptr    : " << arr2ptr << std::endl;
  std::cout << "arr2ptr + 1: " << arr2ptr + 1 << std::endl;
  std::cout << "arr2ptr - 1: " << arr2ptr - 1 << std::endl;

  return 0;
} */
/////////////////////////////////////
/* Ex_6
#include <iostream>

#define SIZE 3

// ADDRESS, initial address
void initializeArrayFunc(int *arr, int arrSize);
void displayArrayFunc(int *arr, int arrSize);

// ADDRESS, thw whole address
// void initializeArrayFunc(int arr[SIZE], int arrSize);
// void displayArrayFunc(int arr[SIZE], int arrSize);

// ADDRESS, initial address
// void initializeArrayFunc(int arr[], int arrSize);
// void displayArrayFunc(int arr[], int arrSize);

int main() {
  int arr[SIZE];

  initializeArrayFunc(arr, SIZE);
  displayArrayFunc(arr, SIZE);

  return 0;
}

void initializeArrayFunc(int *arr, int arrSize) {
  for (int i = 0; i < arrSize; i++)
    arr[i] = i;
}

void displayArrayFunc(int *arr, int arrSize) {
  for (int i = 0; i < arrSize; i++)
    std::cout << "arr[" << i << "]: " << arr[i] << std::endl;
}
*/
