#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void printOdds(int number);
int main(void) {
   int number;
   printf("Odd number printer!\n");
   printf("how many?\n> ");
   scanf("%d", &number);
   if (number > 0) {
      printOdds(number);
   }
   else if (number) {
      printf("A positive value please\n");
   }
   else {
      printf("So what nothing?\n");
   }
printf("Done!\n");
   return 0;
}

void printOdds(int number) {
   int odd = 1;
   int cnt;
   for (cnt = 0; cnt < number; cnt++) {
      printf("%d ", odd);
      odd = odd + 2;
      // odd += 2;
   }
   putchar('\n');
}