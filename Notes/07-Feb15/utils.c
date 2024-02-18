#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "utils.h"

void flushKey( void ) {
   char ch;
   do {
      ch = getchar( );
   } while ( ch != '\n' );
}

void nl( void ) {
   putchar( '\n' );
}

int getInt( ) {
   int num;
   scanf( "%d", &num );
   flushKey( );
   return num;
}

double getDbl( ) {
   double num;
   scanf( "%lf", &num );
   flushKey();
   return num;
}