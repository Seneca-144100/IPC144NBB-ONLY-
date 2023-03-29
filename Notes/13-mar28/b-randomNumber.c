#include <stdlib.h>
#include <stdio.h>

int main( void ) {
   int i;
   srand( time( NULL ) );
   for ( i = 0; i < 10; i++ ) {
      printf( "Random number %d --> %d\n", i + 1, rand( )%100 );
   }

   return 0;
}