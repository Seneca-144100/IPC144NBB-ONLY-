// Enter 5 five numbers and find the maximum print all the number and the maximum!
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "utils.h"
// nums is read only
void prnInts(const int nums[], int size) {
   int i;
   for (i = 0; i < size; i++) {
      printf("%d", nums[i]);
      //nums[i] = 500; forbidden
      if (i != size - 1) {
         printf(", "); // don't put the comma if this is the last element
      }
   }
   printf("\n");
}

void foo(int num) {
   printf("num arg is: %d\n", num);
   num = 300;
}
void fooWithArray(int nums[]) {
   printf("nums[0] arg is: %d\n", nums[0]);
   nums[0] = 300;
}
int main() {
   int y[3] = { 1, 2 , 3 };
   foo(y[0]);  // foo(int num = y[0]);
   prnInts(y, 3);  // prnInt(int nums[] = y, int size = 2);
   fooWithArray(y); // fooWithArray(int nums[] = y);
   prnInts(y, 3);
   return 0;

}