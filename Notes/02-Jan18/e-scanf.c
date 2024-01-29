#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main( void ) {
   int n1;
   int n2;
   int sum;
   printf( "Enter two number to calculate the sum:\n" );
   printf( "999 999: " );
   scanf( "%d %d", &n1, &n2 );

   sum = n1 + n2;

   printf( "The sum of %d and %d is %d.\n", n1, n2, sum );

   return 0;
}