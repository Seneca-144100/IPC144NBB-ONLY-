#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "utils.h"

struct Name {
   char first[51];
   char last[101];
};

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
struct Name getName() {
   struct Name ret;
   printf("First name: ");
   scanf("%s", ret.first);
   flushKey();
   printf("Last name: ");
   scanf("%[^\n]", ret.last);
   return ret;
}
void prnNameNl(struct Name n) {
   printf("%s %s\n", n.first, n.last);
}
int main() {
   struct Name n;
   struct Rectangle R[5];
   int i;
   printf("Your name...\n");
   n = getName();
   printf("Hello ");
   prnNameNl(n);
   printf("Enter 2 rectangles...\n");
   for(i = 0; i < 2; i++) {
      R[i] = getRectangle();
   }
   for(i = 0; i < 2; i++) {
      drawRectangle(R[i]);
   }
   return 0;
}