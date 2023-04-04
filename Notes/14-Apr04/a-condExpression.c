#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main( void ) {
   int a;
   char ch;
   printf("Enter a value:");
   scanf("%d", &a);


   //if(a > 100) {
   //   ch = 'G';
   //}
   //else {
   //   ch = 'L';
   //}

    // same as above but much faster in execution
   ch = (a > 100) ? 'G' : 'L';

   printf("%c\n", ch);

   return 0;
}