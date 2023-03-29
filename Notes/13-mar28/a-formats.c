#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "utils.h"
// Playing with output formatting
// printf.c
#include <stdio.h>

int main( void ) {
   /* integers */
   printf( "\n* ints *\n" );
   printf( "00000000011\n" );
   printf( "12345678901\n" );
   printf( "------------------------\n" );
   printf( "%d|<--        %%d\n", 4321 );
   printf( "%10d|<--  %%10d\n", 4321 );
   printf( "%010d|<--  %%010d\n", 4321 );
   printf( "%-10d|<--  %%-10d\n", 4321 );
   /* floats */
   printf( "\n* floats *\n" );
   printf( "00000000011\n" );
   printf( "12345678901\n" );
   printf( "------------------------\n" );
   printf( "%f|<-- %%f\n", 4321.9876546 );
   /* doubles */
   printf( "\n* doubles *\n" );
   printf( "00000000011\n" );
   printf( "12345678901\n" );
   printf( "------------------------\n" );
   printf( "%lf|<-- %%lf\n", 4321.9876546 );
   printf( "%10.3lf|<--  %%10.3lf\n", 4321.9876 );
   printf( "%010.3lf|<--  %%010.3lf\n", 4321.9876 );
   printf( "%-10.3lf|<--  %%-10.3lf\n", 4321.9876 );
   /* characters */
   printf( "\n* chars *\n" );
   printf( "00000000011\n" );
   printf( "12345678901\n" );
   printf( "------------------------\n" );
   printf( "%c|<--           %%c\n", 'd' );
   printf( "%d|<--         %%d\n", 'd' );
   printf( "%x|<--          %%x\n", 'd' );
   return 0;
}