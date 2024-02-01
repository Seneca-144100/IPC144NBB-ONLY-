#define  _CRT_SECURE_NO_WARNINGS // no warning on stdio functions
#include <stdio.h>

void sayHello( int howManyTimes );
void line( char charToFillTheLineWith, int length );
int main( void ) {
   int num;
   printf( "IPC144NBB - 05- Feb01!\n" );
   line( '=', 40 );
   sayHello( 100 );  // sayHello(int no = 100)
   line( '+', 15 );
   printf( "How many times I should say hello?\n> " );
   scanf( "%d", &num );
   sayHello( num ); // sayHello(int no = nul);
   line( '-', 15 );
   return 0;
}
void sayHello( int no ) {
   int cnt = 0;
   while ( cnt < no ) {
      printf( "%d-Hello!\n", cnt +1);
      cnt++;
   }
}
void line( char f, int len) {
   int cnt = 0;
   while ( cnt < len ) {
      putchar( f );
      cnt++;
   }
   putchar( '\n' );
}






















