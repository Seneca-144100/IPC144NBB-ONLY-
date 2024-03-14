#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "utils.h"
void prnInts( int array[], int size ) {
   int i;
   for ( i = 0; i < size; i++ ) {
      if ( i != 0 ) {
         putchar( ',' );
      }
      printf( "%d", array[i] );
   }
   nl( );

}
void readInts( int array[], int size ) {
   int i;
   printf( "Enter %d integers:\n", size );
   for ( i = 0; i < 5; i++ ) {
      printf( "%d: ", i + 1 );
      //      a[i] = getInt( );
      scanf( "%d", &array[i] );
   }
}

int main( void ) {
   int a[5] = { 3,5,3,5,8 };
   int i = 0;

   prnInts( a, 5 );

   readInts( a, 5 );
   i = 5;
   for ( i--; i >= 0; i-- ) {
      if ( i != 4 ) {
         putchar( ',' );
      }
      printf( "%d", a[i] );
   }
   nl( );
   return 0;
}
