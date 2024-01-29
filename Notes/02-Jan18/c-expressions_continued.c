#include <stdio.h>
int main( void ) {
   int n1;
   int n2;
   int val;

   n1 = 3;
   n2 = 4;

   val = n1 + n2 * 2;

   printf( "the value is: %d\n", val );

   val = (n1 + n2) * 2;

   printf( "the result of (%d + %d)*2 is: %d\n",n1, n2,  val );

   return 0;
}