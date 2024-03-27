#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "utils.h"
void displayMenu( void ) {
   printf(
      "a- option one\n"
      "b- option two\n"
      "c- option three\n"
      "x- e(x)it\n> "
   );
}
char getUserSelection( void ) {
   char ret = getchar( );
   flushKey( );
   return ret;
}
int main(void) {
   int done = 0;
   char selection = 0;
   while ( !done ) {
      displayMenu( );
      selection = getUserSelection( );
      switch ( selection ) {
      case 'a':
      case 'A':
         printf( "One is selected!\n" );
         break;
      case 'X':
      case 'x':
         done = 1;
         break;
      default:
         printf( "Invalid selection!\n" );
      }
   }
   printf( "Goodbye!\n" );

   return 0;
}
