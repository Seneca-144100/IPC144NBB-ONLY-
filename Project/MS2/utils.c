// Final Project 
// Utils module
// Version 1.0
// Date	2023-04-01
// Author	Fardad Soleimanloo
// Description
// This program test the student implementation of the Item class
// for submission.
//
/////////////////////////////////////////////////////////////////
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "utils.h"


void pause(void) {
   printf("Press <ENTER> to continue....");
   flushKey();
}
int getIntMM(int min, int max, const char valueName[]) {
   int value = getInt();
   while(value < min || value > max) {
      printf("[%d<=%s<=%d], retry: ", min, valueName, max);
      value = getInt();
   }
   return value;
}
double getDbl(void) {
   double value;
   int done = 0;
   char newline = 'x';
   while(!done) {
      if(scanf("%lf%c", &value, &newline) == 2) {
         if(newline == '\n') {
            done = 1;
         } else {
            printf("Please enter only a double: ");
            flushKey();
         }
      } else { // user enterd non integer
         flushKey();
         printf("Invalid Double, try again: ");
      }
   }
   return value;
}
double getDblMM(double min, double max, const char valueName[]) {
   double value = getDbl();
   while(value < min || value > max) {
      printf("[%02.lf<=%s<=%.2lf], retry: ", min, valueName, max);
      value = getDbl();
   }
   return value;
}
int getInt(void) {
   int value;
   int done = 0;
   char newline = 'x';
   while(!done) {
      if(scanf("%d%c", &value, &newline) == 2) {
         if(newline == '\n') {
            done = 1;
         }
         else {
            printf("Please enter only an integer: ");
            flushKey();
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

int yes(void) {
   char resp;
   char newline;
   printf("(Y)es/(N)o: ");
   do {
      scanf("%c%c", &resp, &newline);
      if(newline != '\n') {
         flushKey();
         resp = 'x';
      }
   } while(resp != 'Y' && resp != 'y' && resp != 'n' && resp != 'N' && printf("Only (y) for Yes and (n) for No are acceptable values; retry\n> "));
   return (resp == 'Y' || resp == 'y');
}
