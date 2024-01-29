#include <stdio.h>
int main( void ) {
   int n1;
   int n2;
   int sum;

   n1 = 3;
   n2 = 4;

   sum = n1 + n2;


   printf( "The sum of %d and %d is %d\n",n1, n2, sum );

   sum = sum + 10;

   printf( "Now the value of sum is: %d\n", sum );

   return 0;
}