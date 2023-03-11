#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "utils.h"
// delimiter is whitespace.
int main() {
   char name[128];
   int age;
   printf("%s\n", name);
   printf("Name and age: ");
   scanf("%s %d", name, &age);
   printf("Hello %s you are %d years old!\n", name, age);
   return 0;
}