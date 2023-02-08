#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "utils.h"
int main(void) {
   int val = 1234;
   int w;
   printf(">%d<\n", val);
   printf(">%-10d<\n", val);
   printf(">%-10d<\n", val);
   printf(">%010d<\n", val);
   printf(">%010.7d<\n", val);
   printf(">%2d<\n", val);
   for (w = 4; w < 15; w++) {
      printf(">%*d<\n",w, val);
   }
   return 0;
}