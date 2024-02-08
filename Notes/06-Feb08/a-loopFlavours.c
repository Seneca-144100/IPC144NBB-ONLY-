#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
* 
i = i @ n;
i @= n;
replace @ with *,/,+,-,%

*/
void whileLoop( int count );
void doWhile( int count );
void forLoop( int count );
int main( void ) {
   printf( "IPC144NBB - 06 - FEB08\n" );
   whileLoop( 10 );
   whileLoop( -10 );
   doWhile( 10 );
   doWhile( -10 );
   forLoop( 10 );
   forLoop( -10 );
   return 0;
}

void doWhile( int count ) {
   int i = 0;
   do {
      printf( "%d ", i );
      i += 1;
   } while ( i < count );
   putchar( '\n' );
}


void forLoop( int count ) {
   int i;
/* for ( OnceAtThebegining; condition; atEndOfEachLoop ) {
   }
*/
   for ( i = 0; i < count; i += 1 ) {
      printf( "%d ", i );
   }
   putchar( '\n');
}

void whileLoop( int count ) {
   int i = 0;
   while ( i < count ) {
      printf( "%d ", i );
      i += 1;
   }
   putchar( '\n' );
}
