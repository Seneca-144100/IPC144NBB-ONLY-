#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "utils.h"
#include "utils.h"
int main(void) {
   FILE* file;
   file = fopen("output.txt", "w");
   int c;
   printf("Enter an int: ");
   c = getInt();
   fprintf(stdout, "%d", c);
   fprintf(file, "%d", c);

   fclose(file);
   return 0;
}

