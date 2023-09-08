/////////////////////////////////////
/* Ex_1
#include <iostream>

int main() {
  char charValue = 'A';
  char firstMessage[6] = {'H', 'E', 'L', 'L', 'O', '\0'};

  std::cout << "Size of char: " << sizeof(char) << std::endl;
  std::cout << "Char value: " << charValue << std::endl;

  std::cout << "Frist Message: " << firstMessage << std::endl;

  return 0;
} */
/////////////////////////////////////
/* Ex_2
#include <cstring>
#include <iostream>

int main() {
    const char* word = "House";

    char charArray[strlen(word)];

    for (size_t i = 0; i < strlen(word); ++i)
        charArray[i] = word[i];

    for (size_t i = 0; i < strlen(word); ++i)
        std::cout << "array[" << i << "] = '" << charArray[i] << "'" <<
std::endl;

    return 0;
} */
/////////////////////////////////////
/* Ex_3
#include <iostream>
#include <string>

int main() {
    char charArray[] = {'H', 'o', 'u', 's', 'e'};

    std::string str;

    for (int i = 0; i < sizeof(charArray); ++i) {
        str += charArray[i];
    }

    std::cout << str << std::endl;

    return 0;
} */
/////////////////////////////////////
/* Ex_4
#include <iostream>
#include <string>

int main() {
  std::string str = "andromeda";
  int length = str.length();

  for (int i = 0; i < length; ++i) {
    int count = 1;

    for (int j = i + 1; j < length; ++j) {
      if (str[i] == str[j]) {
        count++;
        str[j] = ' ';
      }
    }

    if (count > 1 && str[i] != ' ') {
      std::cout << "Character '" << str[i] << "' "
                << " repeats " << count << " times." << std::endl;
    }
  }

  return 0;
} */
/////////////////////////////////////
/* Ex_5
#include <cstring>
#include <iostream>

#define SIZE 20

// strcpy(str_1, str_2) -> copy str_1 to str_2
// strlen(str_1) -> length of str_1
// strcmp(str_1, str_2) -> compare both str_1 and str_2
// strchr(str_1) -> searching specific characters
// strcat(str_1, str_2) -> concantenates str_2 onto str_1

int main() {
  char str_1[SIZE] = "House";
  char str_2[SIZE] = "Bicycle";
  char str_3[SIZE];

  // strcpy(str_1, str_2) -> copy str_1 to str_2
  strcpy(str_3, str_1);
  std::cout << "strcpy for str_3 to str_1: " << str_3 << std::endl;
  for (int i = 0; i < strlen(str_3); i++)
    std::cout << "str_3[" << i << "]: " << str_3[i] << std::endl;

  return 0;
} */
/////////////////////////////////////
/* Ex_6
#include <cstring>
#include <iostream>

#define SIZE 20

// strcpy(str_1, str_2) -> copy str_1 to str_2
// strlen(str_1) -> length of str_1
// strcmp(str_1, str_2) -> compare both str_1 and str_2
// strchr(str_1) -> searching specific characters
// strcat(str_1, str_2) -> concantenates str_2 onto str_1

int main() {
  char str_1[SIZE] = "House";
  char str_2[SIZE] = "Bicycle";
  char str_3[SIZE];

  // strcat(str_1, str_2) -> concantenates str_2 onto str_1
  strcat(str_1, " ");
  strcat(str_1, str_2);

  int length = strlen(str_1);

  std::cout << "strcat result with str_1 & str_2: " << str_1 << std::endl;
  // std::cout << "strcat length result: " << strlen(str_1) << std::endl;
  std::cout << "strcat length result: " << length << std::endl;

  return 0;
} */
/////////////////////////////////////
/* Ex_7
#include <cstring>
#include <iostream>

#define SIZE 20

// strcpy(str_1, str_2) -> copy str_1 to str_2
// strlen(str_1) -> length of str_1
// strcmp(str_1, str_2) -> compare both str_1 and str_2
// strchr(str_1) -> searching specific characters
// strcat(str_1, str_2) -> concantenates str_2 onto str_1

int main() {
  char str_1[SIZE] = "House";
  char str_2[SIZE] = "Bicycle";
  char str_3[SIZE] = "House";

  // strcmp(str_1, str_2) -> compare both str_1 and str_2
  int strcmpValue_1 = strcmp(str_1, str_2);

  std::cout << "Compare with strcmp: " << strcmpValue_1 << std::endl;
  std::cout << "strcat length result: " << sizeof(strcmpValue_1) << std::endl;

  int strcmpValue_2 = strcmp(str_1, str_3);
  if (strcmpValue_2 == 0)
    std::cout << "str_1 is equal to str_3" << std::endl;
  else
    std::cout << "str_1 is not equal to str_2" << std::endl;

  std::cout << "Compare with strcmp: " << strcmpValue_2 << std::endl;

  return 0;
} */
/////////////////////////////////////
/* Ex_8
#include <cstring>
#include <iostream>

#define SIZE 20

// strcpy(str_1, str_2) -> copy str_1 to str_2
// strlen(str_1) -> length of str_1
// strcmp(str_1, str_2) -> compare both str_1 and str_2
// strchr(str_1) -> searching specific characters
// strcat(str_1, str_2) -> concantenates str_2 onto str_1

int main() {
  char str_1[SIZE] = "House";
  char str_2[SIZE] = "Bicycle";
  char str_3[SIZE] = "House";

  // strchr(str_1) -> searching specific characters
  char ch = 'h';
  char *chptr = strchr(str_1, ch);

  std::cout << "String starting : '" << chptr << "'." << std::endl;

  return 0;
} */