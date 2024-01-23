#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void name( void ) {
   printf( "IPC144NBB 03-Jan23\n" );
   printf( "------------------\n" );
}

void line40( void ) {
   int cnt = 0;
   while ( cnt < 40 ) {
      putchar( '-' );
      cnt = cnt + 1;
   }
   putchar( '\n' );
}


void box( void ) {
   int cnt = 0;
   starline40( );
   while ( cnt < 8 ) {
      middleLine40( );
   }
   starline40( );
}
