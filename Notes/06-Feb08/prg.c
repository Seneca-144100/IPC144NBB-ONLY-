#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#include "utils.h"

int main( void ) {
   int n1;
   int n2;
   printf( "n1\n> " );
   n1 = getInt( );
   printf( "n2\n> " );
   n2 = getInt( );

   printf( "n1: %d , n2: %d\n", n1, n2 );

   return 0;
}
