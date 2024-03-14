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
   while ( scanf( "%d", &num ) != 1 ) {
      flushKey( );
      printf( "Bad integer, try again\n> " );
   }
   flushKey( );
   return num;
}

double getDbl( ) {
   double num;
   while ( scanf( "%lf", &num ) != 1 ) {
      flushKey( );
      printf( "Bad real number, try again\n> " );
   }
   flushKey( );
   return num;
}

void getLine( char str[] ) {
   scanf( "%[^\n]", str );
   flushKey( );
}