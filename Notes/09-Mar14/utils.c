#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "utils.h"
char getSingleChar(void) {
   char ch = getchar();
   flushKey();
   return ch;
}
int getIntMM(int min, int max, const char valueName[]) {
   int val = getInt();
   while (val < min || val > max){
      printf("[%d<=%s<=%d], try again: ", min, valueName, max);
      val = getInt();
   }
   return val;
}
int getInt(void) {
   int value=0;
   char newline=0;
   int done = 0;
   while(!done) {
      if(fscanf(stdin,"%d%c", &value,&newline) == 2) {
         if(newline != '\n') {
            flushKey();
            printf("Enter an integer only, try again: ");
         }
         else {
            done = 1;
         }
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
   while(ch != '\n') {
      ch = getchar();
   }
}

void fflushKey(FILE* file) {
   char ch = 'x';
   while (ch != '\n') {
      ch = fgetc(file);
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