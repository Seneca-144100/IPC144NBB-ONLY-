#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <stdio.h>

int main( void ) {
   char s1[] = "Frank";
   char s2[] = "an";
   char s[81] = "abcdefghijklmnopqrstuvwxyz0123456789";
   if ( strstr( s1, s2 ) ) {
      printf( "There is >%s< in >%s<\n", strstr( s1, s2 ), s1 );
   }
   else {
      printf( "%s not found!\n", s2 );
   }
   if ( strstr( s, "lmn" ) ) {
      printf( "There is >%s< in >%s<\n", strstr( s, "lmn" ), s );
   }
   else {
      printf( "%s not found!\n", "lmn" );
   }
   return 0;
}
