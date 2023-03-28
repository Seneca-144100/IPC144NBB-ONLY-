#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <stdio.h>

int main( void ) {
   char s1[] = "abc";
   char s2[] = "aa";
   char s3[] = "bcdefg";
   char s4[50] = "abc";
   //// if ( strcmp( s2, s1 ) == 0 ) {   // (s2 == s1)
   //// if ( strcmp( s2, s1 ) < 0 ) {   // (s2 < s1)
   ////if ( strcmp( s2, s1 ) > 0 ) {   // (s2 > s1)
   ////   printf( "%s > %s\n", s2, s1 );
   ////}
   strcat( s4, s3 );
   printf( "%s", s4 );
   return 0;
}