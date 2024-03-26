#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "utils.h"



int main(void) {
   int var;
   int* ptr = &var;
   *ptr = 12345;
   printf( "%d\n", var );
   printf( "%d\n", *ptr );
   printf( "%u\n", (unsigned)ptr );
   printf( "%p\n", ptr ); // prints in hex
   return 0;
}
