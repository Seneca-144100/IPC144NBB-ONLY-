// this has compile errors
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int getInt(void  );
double getDbl( void );
int main( void ) {
   int noOfItems; // initially will have garbage in it
   int counter = 0; // intially will have zero in it
   double price;
   double totalPrice = 0.0;
   printf( "Please enter the number of shopped items:\n> " );
   noOfItems = getInt( );
   printf( "Please enter the price of the items:\n" );
   while ( counter < noOfItems ) {
      printf( "%d> ", counter+1 );
      price = getDbl();
      totalPrice = totalPrice + price;
      counter = counter + 1;
   }
   printf( "The total price of shopping today is %.2lf", totalPrice );

   return 0;
}
