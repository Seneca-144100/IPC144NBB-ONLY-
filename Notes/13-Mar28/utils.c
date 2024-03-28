#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "utils.h"

/* string handling functions: */

void strCpy( char des[], const char src[] ) {
   int i;
   //  for ( i = 0; src[i] != NULL; i++ ) {
   for ( i = 0; src[i]; i++ ) {
      des[i] = src[i];
   }
   des[i] = 0;
}
void strnCpy( char des[], const char src[], int len ) {
   int i;
   //  for ( i = 0; src[i] != NULL; i++ ) {
   for ( i = 0; i < len && src[i]; i++ ) {
      des[i] = src[i];
   }
   if(i < len) des[i] = 0;
}

int strCmp( const char left[], const char right[] ) {
   int i;
   int done = 0;
   for ( i = 0; !done && left[i] && right[i]; i++ ) {
      if ( left[i] != right[i] ) {
         done = 1;
      }
   }
   return left[i] - right[i];
}




void flushKey( void ) {
   while ( getchar( ) != '\n' );
}

void nl( void ) {
   putchar( '\n' );
}

int getInt( ) {
   int num;
   char newline = ' ';
   while ( scanf( "%d%c", &num, &newline ) != 2 
                              || newline != '\n' ) {
      flushKey( );
      printf( "Bad integer, try again\n> " );
   }
   return num;
}

double getDbl( ) {
   double num;
   char newline = ' ';
   while ( scanf( "%lf%c", &num, &newline ) != 2 ||
      newline != '\n' ) {
      flushKey( );
      printf( "Bad real number, try again\n> " );
   }
   return num;
}

void getLine( char str[] ) {
   scanf( "%[^\n]", str );
   flushKey( );
}