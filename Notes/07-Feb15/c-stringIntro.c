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
void printString( char str[] ) {
   int i = 0;
   while ( str[i] != NULL ) {
      putchar( str[i] );
      i++;
   }
}

int main( void ) {
   char name[51];
   printf( "What is your name?\n> " );
   readString( name );
   printf( "Hello " );
   printString( name );
   nl( );
   return 0;
}

