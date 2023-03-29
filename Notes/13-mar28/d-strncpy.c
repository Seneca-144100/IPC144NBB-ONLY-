#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <stdio.h>

int main( void ) {
   char s1[] = "Frank";
   char s2[] = "an";
   char s[81] = "abcdefghijklmnopqrstuvwxyz0123456789";

   printf( "%d: %c\n", 'A', 'A' );
   printf( "%d: %c\n", '0', '0' );


   strncpy( s, s1, 3 );
   printf( ">%s<\n", s );
   strncpy( s, s1, 4 );
   s[4] = '0';
   printf( ">%s<\n", s );
   strncpy( s, s1, 5 );
   s[5] = '\0';
   s[5] = 0;
   s[5] = (char)0;
   printf( ">%s<\n", s );
   return 0;
}