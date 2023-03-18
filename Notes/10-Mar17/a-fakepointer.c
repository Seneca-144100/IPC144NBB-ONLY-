#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "pointers.h"
#include "utils.h"

int main(void) {
   int var;
   int pointer ptr;
   ptr = addressOf var;
   targetOf ptr = 1234;
   printf( "var: %d\n", var );
   printf( "TargetOf ptr: %d\n", targetOf ptr );
   printf( "ptr: %u\n", ptr );


   return 0;
}

