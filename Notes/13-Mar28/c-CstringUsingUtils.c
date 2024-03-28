#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "utils.h"
int main(void) {
   char str[12] = "Gary";
   char str2[12];

   printf( "%s\n", str );
   strCpy( str2, str );
   printf( "%s\n", str2 );
   if ( strCmp( str, str2 ) == 0 ) {
      printf( "The two strings are the same!\n" );
   }
   return 0;
}
