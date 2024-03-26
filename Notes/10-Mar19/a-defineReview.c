#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define Heehaw int
#define badSUM a+b
#define SUM (a+b)

#define PI 3.14159265

int main( void ) {
   Heehaw a, b, c;
   a = 10;
   b = 20;
   printf( "the number are %d and %d.\n", a, b );

   c = badSUM * 2;

   printf( "The bad sum multipled by 2 is %d\n", c );

   c = SUM * 2;
  
   printf( "The sum multipled by 2 is %d\n", c );

   return 0;
}
