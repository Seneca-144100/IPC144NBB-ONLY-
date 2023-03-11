#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "utils.h"


/*
Rectangle
Width
Height
*/

void drawRectangle(int width, int height, int fill) {
   int i;
   line_nl(width, fill);
   for(i = 0; i < height - 2; i++) {
      putchar(fill);
      line(width - 2, ' ');
      printf("%c\n", fill);
   }
   line_nl(width, fill);
}



int main() {
   // parallel arrays
   int h[5];
   int w[5];

   int i;
   printf("Please enter 5 rectangle dimensions"
          ", comma separate (width,height<ENTER>)\n");
   for(i = 0; i < 2; i++) {
      printf("%d> ", i + 1);
      scanf("%d,%d", &w[i], &h[i]);
   }



   for(i = 0; i < 2; i++) {
      drawRectangle(w[i], h[i], '*');
   }
   return 0;
}