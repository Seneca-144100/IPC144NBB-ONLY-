#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
* stdio
* Format specifiers for IO
char      %c
int       %d
floats    %f
double    %lf
*/

int main( void ) {
   int noOfCoffees;
   double price;
   double total;
   printf( "Please enter the number of coffees:\n> " );
   scanf( "%d", &noOfCoffees );
   printf( "Please enter the price of a coffee:\n> " );
   scanf( "%lf", &price );
   total = price * noOfCoffees;
   printf( "Please pay: %lf\n", total );
   printf( "Please pay: %.2lf\n", total );

   return 0;
}
