#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "utils.h"
int main(void) {
   int a[4] = { 10, 20, 30, 40 };
   int i;
   printf( "Enter an int (50): " );
   scanf( "%d", a );
   for ( i = 0; i < 4; i++ ) {
      printf( "%d ", a[i] );
   }
   return 0;
}
