#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "utils.h"
// search for SIZE_OF_A and replace with 5

// user enters Fred\n
void readString( char str[] ) {
   int i = -1;
   do {
      i++;
      str[i] = getchar( );
   } while ( str[i] != '\n' );
   str[i] = NULL;
}
int main( void ) {
   char name[51];
   printf( "What is your name?\n> " );
   readString( name );
   scanf( "%[^\n]", name );  // up to new line

   printf( "Hello %s\n", name );
   printf( "What is your name?\n> " );
   scanf( "%s", name );      // up to whitespace character 
   printf( "Hello %s\n", name );

   return 0;
}
