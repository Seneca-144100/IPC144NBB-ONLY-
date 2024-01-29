#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
* stdio
* Format specifiers for IO
char      %c
int       %d
floats    %f
double    %lf
*/

int main( void ) {
   int a;
   printf( "Please enter an integer:\n> " );
   scanf( "%d", &a );
   printf( "The integer you entered is: %d\n", a );

   return 0;
}
