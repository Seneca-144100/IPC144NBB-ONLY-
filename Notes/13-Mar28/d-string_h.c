#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main(void) {
   char str[12] = "Gary";
   char str2[12];
   printf( "%s\n", str );
   strcpy( str2, str );
   printf( "%s\n", str2 );
   if ( strcmp( str, str2 ) == 0 ) {
      printf( "The two strings are the same!\n" );
   }
   return 0;
}
