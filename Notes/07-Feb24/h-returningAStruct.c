#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "utils.h"

struct Rectangle {
   int width;
   int height;
   char fill;
};


void drawRectangle(struct Rectangle rc) {
   int i;
   line_nl(rc.width, rc.fill);
   for(i = 0; i < rc.height - 2; i++) {
      putchar(rc.fill);
      line(rc.width - 2, ' ');
      printf("%c\n", rc.fill);
   }
   line_nl(rc.width, rc.fill);
}

struct Rectangle getRectangle() {
   struct Rectangle ret;
   printf("width,heigth,fill (csv)> ");
   scanf("%d,%d,%c", &ret.width, &ret.height, &ret.fill);
   return ret;
}

int main() {
   struct Rectangle R;
   R = getRectangle();
   drawRectangle(R);
   return 0;
}