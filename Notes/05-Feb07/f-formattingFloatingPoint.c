#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "utils.h"
int main(void) {
   double val = 1234.56789;
   int w = 10, d=1;
   printf(">%lf<\n", val);
   printf(">%.4lf<\n", val);
   printf(">%20.2lf<\n", val);
   printf(">%020.2lf<\n", val);
   printf(">%-20.2lf<\n", val);
   for (w = 10; w < 15; w+=2) {
      printf("-------------------------\n");
      for (d = 0; d < 3; d++) {
         printf("w: %d, d: %d\n", w, d);
         printf(">%*.*lf<\n", w, d, val);
      }
   }
   return 0;
}