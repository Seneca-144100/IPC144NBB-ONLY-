#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int mark( char grade );

int main( void ) {
   char ch;
   printf( "%d ", mark( '+' ) );
   for (ch = 'A'; ch <= 'F'; ch++ ) {
      printf( "%d ", mark( ch ) );
   }
   putchar( '\n' );
   return 0;
}
int mark( char grade ) {
   int m;
   switch ( grade ) {
   case '+':
      m = 100;
      break;
   case 'A':
      m = 89;
      break;
   case 'B':
      m = 79;
      break;
   case 'C':
      m = 69;
      break;
   case 'D':
      m = 59;
      break;
   case 'F':
      m = 49;
      break;
   default:
      m = -1;
      break;
   }
   return m;
}