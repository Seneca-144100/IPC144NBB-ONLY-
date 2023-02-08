#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "utils.h"
char getSingleChar(void) {
   char ch = getchar();
   flushKey();
   return ch;
}
int getInt(void) {
   int value;
   int done = 0;
   while (!done) {
      if (scanf("%d", &value) == 1) {
         done = 1;
      }
      else { // user enterd non integer
         flushKey();
         printf("Invalid Integer, try again: ");
      }
   }
   return value;
}

void flushKey(void) {
   char ch = 'x';
   while (ch != '\n') {
      ch = getchar();
   }
}

int yes(void) {
   int res;
   char rep;
   printf("(Y)es or (N)o: ");
   rep = getSingleChar();
   if (rep == 'Y' || rep == 'y') {
      res = 1;
   }
   else {
      res = 0;
   }
   return res;
}