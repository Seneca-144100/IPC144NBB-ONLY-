#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <stdio.h>

int main( void ) {
   char s1[] = "Frank";
   char s2[] = "an";
   char s[81] = "abcdefghijklmnopqrstuvwxyz0123456789";

   strcpy( s, s1 );
   printf( ">%s<\n", s );
   printf( ">%c<\n", s[6] );
   printf( ">%s<\n", &s[6] );
   return 0;
}