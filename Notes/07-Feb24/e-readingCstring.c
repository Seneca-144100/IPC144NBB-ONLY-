#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "utils.h"

int main() {
   char col1[50];
   char col2[50];
   char col3[50];
   // red,black,green
   printf("three colors dash separated\n> ");
   scanf("%[^-]-%[^-]-%[^\n]", col1, col2, col3);
   printf("mix of %s, %s, %s\n", col1, col2, col3);
   return 0;
}