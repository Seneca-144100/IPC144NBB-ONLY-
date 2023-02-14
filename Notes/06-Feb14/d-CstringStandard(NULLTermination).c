// Enter 5 five numbers and find the maximum print all the number and the maximum!
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "utils.h"
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
void prnCharArray(char carr[]) {
   int i;
   for (i = 0; carr[i] != 0; i++) {
      putchar(carr[i]);
   }
}
int main() {
   char name[20] = { 'F','a','r','d','a','d','0', 0, 'A', 'B', 'C'};
   char cString[50] = "Soleimanloo";
   char lastname[100] = "abcdefghijklmnopqrstuvwxyz";
   int pos[6] = { 10,30,2,19,4,0 };// flagging the end by a zero value
   int i;
   printf("Characater %c has the ascii code of %d\n", '0', '0');
   prnPositiveInts(pos);
   prnCharArray(name);
   printf("\n");
   printf("The name is: %s %s\n", name, cString);
   // how to copy a cString 
   // because we can not do lastname = cString!!!!!
   for (i = 0; cString[i] != 0; i++) {
      lastname[i] = cString[i];
   }
   lastname[i] = 0;
   return 0;

}