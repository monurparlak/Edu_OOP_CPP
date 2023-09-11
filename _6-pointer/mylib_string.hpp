#pragma once

/* Definition include library */
#include <iostream>

/* Definition define types */
#define __myStrFunc

/* Definition Function Prototypes */
int __myStrFunc myStrlen(const char *str);
int __myStrFunc myStrcmp(const char *str_1, const char *str_2);
char *__myStrFunc myStrcat(const char *dest, const char *source);
char *__myStrFunc myStrchr(const char *str, int character);

/* myStrlen is equivalent to strlen in the string library.  */
int __myStrFunc myStrlen(const char *str)
{
  int i = 0;
  while(*str != '\0')
    {
      str ++;
      i ++;
    }
  return i;
}
  
/* myStrcmp is equivalent to strcmp in the string library. */
int __myStrFunc myStrcmp(const char *str_1, const char *str_2)
{
  while (*str_1 != '\0' && *str_1 == *str_2) {
    str_1++;
    str_2++;
  }

  if (*str_1 < *str_2)
    return -1;
  else if (*str_1 > *str_2)
    return 1;

  return 0;
}

/* myStrcat is equivalent to strcat in the string library. */
char *__myStrFunc myStrcat(const char *dest, const char *source)
{
  char *result = new char[myStrlen(dest) + myStrlen(source) + 1];
  char *temp = result;

  while (*dest != '\0') {
    *temp = *dest;
    dest++;
    temp++;
  }

  while (*source != '\0') {
    *temp = *source;
    source++;
    temp++;
  }

  *temp = '\0';

  return result;
}
/* myStrchr is equivalent to strchr in the string library. */
char *__myStrFunc myStrchr(const char *str, int character)
{
  while (*str != '\0') {
    if (*str == character)
      return (char *)str;
    str++;
  }

  return nullptr;
}