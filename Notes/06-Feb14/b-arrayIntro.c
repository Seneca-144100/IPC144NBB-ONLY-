// Enter 5 five numbers and find the maximum print all the number and the maximum!
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "utils.h"
int main() {
   // an integer array!
   int num[5]; // I have five integer from num[0] to num[4]
   int max;
   int i;
   for (i = 0; i < 5; i++) {
      printf("%d> ", i + 1);
      scanf("%d", &num[i]);
      if (i == 0) {
         max = num[i];
      }
      else if (num[i] > max) {
         max = num[i];
      }
   }
   printf("The numbers are...\n");
   for (i = 0; i < 5; i++) {
      printf("%d ", num[i]);
   }
   printf("\nThe largest value is: %d", max);
   return 0;
}