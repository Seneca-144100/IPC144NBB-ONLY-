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

int getInt(void) {
   int num;
   scanf( "%d", &num );
   flushKey( );
   return num;
}

double getDbl(void) {
   double num;
   scanf( "%lf", &num );
   flushKey();
   return num;
}

float getFlt(void) {
   float num;
   scanf("%f", &num);
   flushKey();
   return num;
}