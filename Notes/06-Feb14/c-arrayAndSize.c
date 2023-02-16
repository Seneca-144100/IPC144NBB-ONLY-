// Enter 5 five numbers and find the maximum print all the number and the maximum!
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "utils.h"
void foo(int num) {
   num = 100;
}
void prnInts(int nums[], int size) {
   int i;
   for (i = 0; i < size; i++) {
      printf("%d", nums[i]);
      if (i != size - 1) {
         printf(", "); // don't put the comma if this is the last element
      }
   }
   printf("\n");
}
// prints integers until negative value is reached
void prnPositiveInts(int nums[]) {
   int i;
   for (i = 0; nums[i] > 0 ; i++) {
      printf("%d ", nums[i]);
   }
   printf("\n");
}
int main() {
   int x = 200;
   int ar[30] = { 20,4, 92 }; // ar[0] = 20 and ar[1] = 4 and ar [2] = 92 and the rest are zeros
   int vals[3] = { 30, 20, 10 };
   int pos[6] = { 10,30,2,19,4,0 };// flagging the end by a zero value (NULL termintated array if positive integers)
   foo(x);   // foo(int num = x)
   printf("%d\n", x);
   prnInts(ar, 3);
   prnInts(vals , 3);
   prnPositiveInts(pos);
   return 0;

}