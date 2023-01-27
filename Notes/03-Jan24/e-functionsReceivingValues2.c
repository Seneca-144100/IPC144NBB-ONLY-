#define  _CRT_SECURE_NO_WARNINGS // no warning on stdio functions
#include <stdio.h>

void line(int length);

int main(void) {
   int i;
   i = 1;
   while (i <= 10) {
      line(i);
      i++;
   }
   return 0;
}

void line(int len) {
   int i;
   for (i = 0; i < len; i++) {
      putchar('-');
   }
   putchar('\n');
}
