#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "utils.h"

int main(void) {
   FILE* file;
   char name[81];
   double price;
   file = fopen("cupcakes.csv", "r");
   while (fscanf(file, "%[^,],%lf", name, &price) == 2) {
      printf("%s: %.2lf\n", name, price);
      fflushKey(file);
   }
   fclose(file);
   return 0;
}

