#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "utils.h"
int main(void) {
   int a[4] = { 10, 20, 30, 40 };
   int* p;
   p = a;
   int i;
   for ( i = 0; i < 3; i++ ) {
      printf( "%d ", p[i] );
   }
   printf( "\n" );
   p = &a[1];
   for ( i = 0; i < 3; i++ ) {
      printf( "%d ", p[i] );
   }
   printf( "\n" );

   p = a;
   for ( i = 0; i < 4; ) {
      printf( "%d ", *p );
      i++; p++;
   }
   printf( "%d ", *p );
   printf( "\n" );

   for (p = a, i = 0; i < 4;i++, p++ ) {
      printf( "%u ", p );
   }
   printf( "%u ", p );
   printf( "\n" );

   return 0;
}
