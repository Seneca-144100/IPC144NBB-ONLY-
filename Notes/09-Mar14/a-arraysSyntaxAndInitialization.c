#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "utils.h"

int main( void ) {
   int a[5] = { 3,5,3,5,8};
   int i = 0;

   for ( i = 0; i < 5; i++ ) {
      if ( i != 0 ) {
         putchar( ',' );
      }
      printf( "%d", a[i] );
   }
   nl( );

   printf( "Enter 5 integers:\n" );
   for (i=0; i < 5; i++ ) {
      printf( "%d: ", i );
//      a[i] = getInt( );
      scanf( "%d", &a[i] );
   }
   for ( i--; i >= 0; i-- ) {
      if ( i != 4 ) {
         putchar( ',' );
      }
      printf( "%d", a[i] );
   }
   nl( );
   return 0;
}
