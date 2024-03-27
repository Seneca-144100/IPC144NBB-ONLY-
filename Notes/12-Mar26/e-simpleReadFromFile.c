#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "utils.h"
#include "item.h"

int main(void) {
   char str[100];
   FILE* myfile = fopen( "hello.txt", "r" );
   fscanf( myfile, "%s", str );
   printf( "The first word in the hello.txt is %s\n", str );
   fscanf( myfile, "%s", str );
   printf( "And the next one is %s\n", str );
   fclose( myfile );
   return 0;
}
