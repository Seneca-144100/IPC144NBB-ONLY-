#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
   //          index: 0    1    2    3    4
   int a[3][5] = { { 10,  20,  30,  40,  50 },      // 0
                   { 110, 120, 130, 140, 150 },     // 1
                   { 210, 220, 230, 240, 250 } };   // 2
   int i, j;
   for(i = 0; i < 3; i++) {  // go through the arrays
      for(j = 0; j < 5; j++) { // go through the elements of each arrau
         printf("%3d%s", a[i][j], (j != 4) ? ", " : "\n");
      }
   }
   printf("End of the loop!\n");
   return 0;
}