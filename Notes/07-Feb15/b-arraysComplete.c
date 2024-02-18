#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "utils.h"
// search for SIZE_OF_A and replace with 5
#define SIZE_OF_A 5
//void prnIntArray( int array[], int size, int ascending ) {
void prnIntArray(const int array[], int size ) {
      int i;
   for ( i = 0; i < size; i++ ) {
      if ( i != 0 ) {
         putchar( ',' );
      }
      printf( "%d", array[i] );
   }
   nl( );
}

void readIntArray( int array[], int size ) {
   int i;
   printf( "Enter %d integers:\n", size );
   for ( i = 0; i < size; i++ ) {
      printf( "%d: ", i );
      array[i] = getInt( );
   }
}

int main( void ) {

   int a[SIZE_OF_A] = { 3,5,3,5,8 };
   int b[3];
   int i = 0;

   prnIntArray( a, SIZE_OF_A );
   prnIntArray( b, 3 );

   readIntArray( a, SIZE_OF_A );
   readIntArray( b, 3 );

   for (i=4; i >= 0; i-- ) {
      if ( i != 4 ) {
         putchar( ',' );
      }
      printf( "%d", a[i] );
   }
   nl( );
   prnIntArray( b, 3 );
   return 0;
}
