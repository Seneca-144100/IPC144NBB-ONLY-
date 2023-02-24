#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "utils.h"

int main() {
   char name[128];
   // if user enters Homer Simpson<ENTER>
   // what is the output of this program
   printf("Name: ");
   scanf("%[^s]", name);
   printf("%s", name);
   return 0;
}