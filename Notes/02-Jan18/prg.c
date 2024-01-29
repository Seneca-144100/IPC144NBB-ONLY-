#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
double getDouble( void ); // prototype for getDouble;

int main( void ) {
   double n1;
   double n2;
   double sum;
   printf( "Enter two floating piont numbers to calculate the sum:\n" );

   n1 = getDouble( );
   n2 = getDouble( );

   sum = n1 + n2;

   printf( "The sum of %lf and %lf is %lf.\n", n1, n2, sum );

   return 0;
}

double getDouble( void ) {
   double theValue;
   printf( "> " );
   scanf( "%lf", &theValue );
   return theValue;
}