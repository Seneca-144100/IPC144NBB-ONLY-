#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "utils.h"
void getIntPtr( int* vptr ) {
   printf( "Enter a number: " );
   scanf( "%d", vptr );
}

int main(void) {
   int var;
   int* ptr;
   ptr = &var;
   *ptr = 1234;
   printf( "var: %d\n", var );
   printf( "TargetOf ptr: %d\n", *ptr );
   printf( "ptr: %u\n", ptr );

   getIntPtr( &var );
   printf( "You entered: %d\n", var );

   return 0;
}

