#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
   int number;
   printf("Enter a number: ");
   scanf("%d", &number);
   if (number >= 0) {
      if (number) {
         printf("the number is positive!\n");
      }
      else {
         printf("It is zero!\n");
      }
   }
   else{
      printf("The number is negative!\n");
   }
   printf("Done!\n");
   return 0;
}

