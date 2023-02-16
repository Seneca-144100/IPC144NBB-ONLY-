// Enter 5 five numbers and find the maximum print all the number and the maximum!
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "utils.h"
// nums is read only

int main() {
   char fullname[100] = "";
   char lastname[50];
   char name[50];
   printf("First name: ");
   scanf("%s", name);
   printf("Last name: ");
   scanf("%s", lastname);
   strCpy(fullname, name);
   strCat(fullname, " ");
   strCat(fullname, lastname);
   printf("Your full name is: %s\n", fullname);
   return 0;

}