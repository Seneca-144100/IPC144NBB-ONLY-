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
   while(!done) {
      if(scanf("%d", &value) == 1) {
         done = 1;
      } else { // user enterd non integer
         flushKey();
         printf("Invalid Integer, try again: ");
      }
   }
   flushKey();
   return value;
}

void flushKey(void) {
   char ch = 'x';
   while(ch != '\n') {
      ch = getchar();
   }
}

int yes(void) {
   int res;
   char resp;
   printf("(Y)es or (N)o: ");
   resp = getSingleChar();
   if(resp == 'Y' || resp == 'y') {
      res = 1;
   } else {
      res = 0;
   }
   return res;
}
void strCpy(char des[], const char src[]) {
   int i;
   for (i = 0; src[i] != 0; i++) {
      des[i] = src[i];
   }
   des[i] = 0;
}
void strCat(char des[], const char src[]) {
   int i, j;
   for (i = 0; des[i] != 0; i++) {
   }
   for (j = 0; src[j] != 0; j++) {
      des[i] = src[j];
      i++;
   }
   des[i] = 0;
}