// Final Project
// Student POS App M34 tester program
// Version 1.0
// Author   Fardad Soleimanloo
// Description
// This program test the student implementation of the Item class
// for submission.
//
/////////////////////////////////////////////////////////////////
#include <stdio.h>
#include "PosApp.h"
int main() {
   int i;
   int foundIndex;
   loadItems("posdata.csv");
   for(i = 0; (foundIndex = search()) != -2;i++){
      if(foundIndex >= 0) {
         printf("SKU found at index %d\n", foundIndex);
      }
      else {
         printf("SKU not found!\n");
      }
   }
   printf("Search was executed %d times...", i);
   return 0;
}

