#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "pointers.h"
#include "utils.h"

int main(void) {
   int var;
   int pointer ptr = addressOf var;
   targetOf ptr = 12345;
   printf( "%d\n", var );
   printf( "%d\n", targetOf ptr );
   printf( "%u\n", ptr );
   return 0;
}
