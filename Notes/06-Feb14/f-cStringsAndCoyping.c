// Enter 5 five numbers and find the maximum print all the number and the maximum!
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "utils.h"
// nums is read only

int main() {
   char cstr[50] = "Homer";
   char lastname[50] = "Simpson";
   char name[50];
   printf("cstr is: %s\n", cstr);
   strCpy(name, cstr);
   printf("name is: %s\n", name);
   strCat(name, lastname);
   printf("name is: %s\n", name);
   return 0;

}