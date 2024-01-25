#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void name( void ) {
   printf( "IPC144NBB 03-Jan23\n" );
   printf( "------------------\n" );
}

void line40( void ) { // line40 scope starts here
   int cnt = 0;
   while ( cnt < 40 ) {
      putchar( '-' );
      cnt = cnt + 1;
   }
   putchar( '\n' );
}  // line40 scope ends here

