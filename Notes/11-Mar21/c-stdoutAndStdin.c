#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "utils.h"
#include "item.h"

int main(void) {
   int mark;
   fprintf(stdout, "Hello IPC144NBB!\n" );
   fprintf( stdout, "What is the mark?\n> " );
   fscanf( stdin, "%d", &mark );
   fprintf( stdout, "You entered %d\n", mark );
   return 0;
}
