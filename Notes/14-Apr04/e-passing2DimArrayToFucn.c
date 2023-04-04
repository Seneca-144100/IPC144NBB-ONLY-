#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void prnIntTable(int t[][5], int row) {
   int i, j;
   for(i = 0; i < row; i++) {  // go through the size arrays
      for(j = 0; j < 5; j++) { // go through the elements of each arrau
         printf("%5d%s", t[i][j], (j != 4) ? ", " : "\n");
      }
   }

}
\

int main(void) {
   //          index: 0    1    2    3    4
   int a[3][5] = { { 10,  20,  30,  40,  50 },      // 0
                   { 110, 120, 130, 140, 150 },     // 1
                   { 210, 220, 230, 240, 250 } };   // 2
   //          index: 0    1    2    3    4
   int b[10][5] = { { 10,  20,  30,  40,  50 },      // 0
                   { 110, 120, 130, 140, 150 },     // 1
                   { 210, 220, 230, 240, 250 }, // 2
                   { 310, 320, 330, 340, 350 },  // 3
                   { 410, 420, 430, 440, 450 }, // 4
                   { 510, 520, 530, 540, 550 }, // 5
                   { 610, 620, 630, 640, 650 }, // 6
                   { 710, 720, 730, 740, 750 },  // 7
                   { 810, 820, 830, 840, 850 },  // 8
                   { 910, 920, 930, 940, 950 }   // 9
   };

   prnIntTable(a, 3);
   printf("================================\n");
   prnIntTable(b, 10);
   printf("End of the loop!\n");
   return 0;
}