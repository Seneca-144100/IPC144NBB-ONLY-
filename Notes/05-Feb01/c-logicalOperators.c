#define  _CRT_SECURE_NO_WARNINGS // no warning on stdio functions
#include <stdio.h>


int main( void ) {
   int a = 10;
   int b = 20;
   int c = 30;
   int d = 30;

   printf( "IPC144NBB - 05- Feb01!\n" );
   printf( "a: %d,  b: %d, c: %d, d: %d\n", a, b, c, d );
   printf( "a < b || c != d is: %d\n", a < b || c != d );
   printf( "c != d && a < b is: %d\n", c != d && a < b );
   printf( "(a<b || c <= d) && (a > d) is: %d\n", (a < b || c <= d) && (a > d) );
   return 0;
}






















