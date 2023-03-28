#include <stdio.h>
int main( void ) {
   char str1[] = "abcdefghijklmnop";
   char str2[] = "abcd";
   printf( "*%-10.*s*\n", 6,  str1 );
   printf( "*%-10.*s*\n", 6, str2 );
   return 0;
}