#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "utils.h"
#include "item.h"
void flushFile( FILE* fptr ) {
   char ch=0;
   while ( ch != '\n' ) {
      fscanf( fptr, "%c", &ch );
   }
}
int main(void) {
   double x = 0, y = 0;
   int row = 1;
   FILE* myfile = fopen( "coord.csv", "r" );
   if ( myfile ) {
      while ( fscanf( myfile, "%lf,%lf", &x, &y ) == 2 ) {
         flushFile( myfile );
         printf( "%3d- x: %06.2lf, y: %06.2lf\n", row, x, y );
         row++;
      }
      fclose( myfile );
   }
   else {
      fprintf( stderr, "File not found!\n" );
   }
   return 0;
}
