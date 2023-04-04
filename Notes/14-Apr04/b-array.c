#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main( void ) {
   int a[5] = { 10, 20, 30, 40, 50 };
   int i;
   for(i = 0; i < 5; i++) {
      printf("%d%c", a[i], (i != 4) ? ',' : '\n');
   }
   printf("End of the loop!\n");
   return 0;
}