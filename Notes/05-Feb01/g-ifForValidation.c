// no warning on stdio functions
#define  _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
void sayHello( int howManyTimes );
void line( char charToFillTheLineWith, int length );
void title( char fillLineWith );
int main( void ) {
   int num;
   printf( "How many times I should say hello?\n> " );
   scanf( "%d", &num );

   if ( num > 10 ) {
      printf( "Too many hellos, I cannot do that sorry!\n" );
   }
   else {
      sayHello( num );
   }
   return 0;
}
void title( char fillLineWith ) {
   printf( "IPC144NBB - 05- Feb01!\n" );
   line( fillLineWith, 40 );
}

void sayHello( int no ) {
   int cnt = 0;
   line( '-', 15 );
   while ( cnt < no ) {
      printf( "%d-Hello!\n", cnt +1);
      cnt++;
   }
   line( '-', 15 );
}
void line( char f, int len) {
   int cnt = 0;
   while ( cnt < len ) {
      putchar( f );
      cnt++;
   }
   putchar( '\n' );
}






















