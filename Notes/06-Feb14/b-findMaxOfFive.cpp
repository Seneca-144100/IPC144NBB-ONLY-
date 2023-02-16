// enter 5 five numbers and find the maximum and print it!
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "utils.h"
int main() {
   int num;
   int max;
   int cnt;
   for (cnt = 0; cnt < 5; cnt++) {
      printf("%d> ", cnt + 1);
      scanf("%d", &num);
      if (cnt == 0) {
         max = num;
      }
      else if (num > max) {
         max = num;
      }
   }
   printf("The largest value is: %d", max);
   return 0;
}