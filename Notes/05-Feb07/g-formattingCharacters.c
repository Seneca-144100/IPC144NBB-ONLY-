#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "utils.h"
int main(void) {
   char ch = '@';
   int w;
   printf(">%c<\n", ch);
   printf(">%-10c<\n", ch);
   printf(">%010c<\n", ch);
   printf(">%2c<\n", ch);
   for (w = 4; w < 15; w++) {
      printf(">%*c<\n", w, ch);
   }
   return 0;
}