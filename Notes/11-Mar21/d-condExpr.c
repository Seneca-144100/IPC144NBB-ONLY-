#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "utils.h"
void prnName( const char* name ) {
   int i=0;
   while ( name[i] ) {
      putchar( name[i++] );
   }
   putchar( '\n' );
}
void prnInts( const int* arr, int size ) {
   int i;
   char comma = ',';
   for ( i = 0; i < size; i++ ) {
      printf( "%d%c", arr[i], i != size - 1 ? comma : '\n' );
      //if ( i != size - 1 ) {
      //   putchar( ',' );
      //}
      //else {
      //   putchar( '\n' );
      //}

     // putchar( i != size - 1 ? ',' : '\n' );

   }
}

int main(void) {
   char myname[41] = "Fardad";
   int a[4] = { 10, 20, 30, 40 };
   prnInts( a, 4 );
   prnName( myname );
   return 0;
}
