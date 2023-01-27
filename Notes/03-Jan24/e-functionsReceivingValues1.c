#define  _CRT_SECURE_NO_WARNINGS // no warning on stdio functions
#include <stdio.h>

void line(int theLengthOfTheLine);

int main(void) {
   int i; 
   i = 0;          // only use this loop, but know of others too
   while (i < 3) {
      printf("Hello!\n");
      i++;
   }
   line(20);   // line(int len = 20)
   for (i = 0; i < 3; i++) {
      printf("Hello!\n");
   }
   line(40);
   // do while happens at least once!
   i = 0;
   do {
      printf("Hello!\n");
      i++;
   } while (i < 3);
   return 0;
}

void line(int len) {
   int i;
   for (i = 0; i < len; i++) {
      putchar('-');
   }
   putchar('\n');
}
