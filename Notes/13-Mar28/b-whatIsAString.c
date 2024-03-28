#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "utils.h"
int main(void) {
   char str[12] = "Gary";
//   char str[12] = { 'G','a','r','y'};
//   str[0] = 'G';
//   str[1] = 'a';
//   str[2] = 'r';
//   str[3] = 'y';
////   str[4] = 0;
//   //str[4] = '\0';
//   //str[4] = NULL;
   printf( "%s\n", str );
   return 0;
}
