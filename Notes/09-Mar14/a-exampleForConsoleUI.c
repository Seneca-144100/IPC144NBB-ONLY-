#include <stdio.h>
#include "utils.h"
int menu();

int main() {
   int sel=0;
   int done = 0;
   while(!done) {
      sel = menu();
      switch(sel) {
      case 1:
         printf("do option 1\n");
         break;
      case 2:
         printf("Option 2 is selected\n");
         break;
      case 3: 
         printf("Option 3 must be done!\n");
         break;
      default:
         printf("Goodbye, and thank you for using my useless program!\n");
         done = 1;
         break;
      }
   }
   return 0;
}

int menu() {
   printf("1- Option 1\n"
          "2- Option 2\n"
          "3- Option 2\n"
          "0- Exit\n"
          "> ");
   return getIntMM(0, 3, "Selection");
}