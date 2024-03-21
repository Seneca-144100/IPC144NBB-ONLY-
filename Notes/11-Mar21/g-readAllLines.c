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
   char str[100]="";
   FILE* myfile = fopen( "hello.txt", "r" );
   while ( fscanf( myfile, "%[^\n]", str ) == 1 ) {
      flushFile( myfile );
      printf( ">%s<\n", str );
      str[0] = 0; //null terminate at the begining 
   }
   fclose( myfile );
   return 0;
}
