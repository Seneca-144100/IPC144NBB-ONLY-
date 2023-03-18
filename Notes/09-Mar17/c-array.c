#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "utils.h"

int main(void) {
   int a[3] = { 111,222, 333 };
   printf( "%d\n", a[0] );
   printf( "%d\n", *a );
   printf( "%d\n, ", a[1] );
   printf( "%d\n", *(a + 1) );

   return 0;
}

