#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "utils.h"

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