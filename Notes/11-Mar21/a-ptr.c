#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "utils.h"
int main(void) {
   double d;
   int i;
   int* p;
   double* q;
   
   p = &i;
   q = &d;

   *p = 123;
   *q = 123.456;

   printf( "%d, %lf\n", i, d );
   printf( "%d, %lf\n", *p, *q );
   printf( "&i: %u, &d: %u\n", p, q );


   return 0;
}
