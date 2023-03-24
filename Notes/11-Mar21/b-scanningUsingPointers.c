#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "utils.h"
int main(void) {
   int i;
   int* p;
   p = &i;
   printf( "Enter an int: " );
   scanf( "%d", p );
   printf( "You Entered: %d\n", i );

   return 0;
}
