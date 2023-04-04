#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main( void ) {
   int a;
   printf("Enter a value:");
   scanf("%d", &a);


   printf("%c\n", (a > 100) ? 'G' : 'L');

   return 0;
}