/*
On linux or mac command line

gcc -o myprg -Wall main.c func.c <ENTER> 


*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void name( void );


void line40( void );
int main( void ) {
   int a = 10;
   line40( );
   while ( a < 13 ) {
      printf( "Hello!" );
      a = a + 1;
   }
   //printf( "\n" );
   putchar( '\n' );
   a = 0;
   while ( a < 3 ) {
      printf( "%d ", a );
      a = a + 1;
   }
   putchar( '\n' );
   return 0;
}
