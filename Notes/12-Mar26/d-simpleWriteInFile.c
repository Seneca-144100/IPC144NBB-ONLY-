#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "utils.h"
#include "item.h"

int main(void) {
   int mark;
   FILE* myfile = fopen( "hello.txt", "w" );
   fprintf(myfile, "Hello IPC144NBB!\n" );
   fclose( myfile );
   return 0;
}
