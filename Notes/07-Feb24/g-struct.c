#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "utils.h"

struct Rectangle {
   int width;
   int height;
   char fill;
};


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
   struct Rectangle R;
   R.width = 40;
   R.height = 5;
   R.fill = '+';
   drawRectangle(R.width, R.height, R.fill);
   return 0;
}