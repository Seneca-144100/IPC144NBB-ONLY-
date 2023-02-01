/*
Receive a mark from user, and conver it to letter grade and 
print it back;
And then do it over and over for many marks.

*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int getInt();
int getRep();
void mark2Grade();
int main(void) {
   int cnt;
   int i;
   cnt = getRep();
   for (i = 0; i < cnt; i++) {
      mark2Grade();
   }
   return 0;
}
int getRep() {
   int value;
   printf("How many times?\n> ");
   scanf("%d", &value);
   return value;
}

int getInt() {
   int value;
   int done = 0;
   while (!done) {
      if (scanf("%d", &value) == 1) {
         done = 1;
      }
      else { // user enterd non integer
         printf("Invalid Integer, try again: ");
      }
   }
   return value;
}

