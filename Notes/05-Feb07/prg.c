#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "utils.h"
int main(void) {
   int largest;
   int sum = 0;
   int num;
   int counter;
   printf("Please enter 10 integers:\n");
   for (counter = 0; counter < 5; counter++) {
      printf("%02d> ", counter + 1);
      num = getInt();
      sum += num;
      if (counter == 0) { // first time loop running
         largest = num;
      }
      else {
         if (num > largest) {
            largest = num;
         }
      }
   }
   printf("sum: %d, average: %.2lf\n", sum, (double)sum / counter);
   printf("largest value: %d\n", largest);
   return 0;
}