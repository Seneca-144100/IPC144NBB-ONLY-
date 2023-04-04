#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void prnIntTable(const int t[][5], int row) {
   int i, j;
   for(i = 0; i < row; i++) {  // go through the size arrays
      for(j = 0; j < 5; j++) { // go through the elements of each arrau
         printf("%5d%s", t[i][j], (j != 4) ? ", " : "\n");
      }
   }

}

void prnTables(int b[][3][5], int boxes) {
   for(int i = 0; i < boxes; i++) {
      printf("Table %d =====================================\n", (i + 1));
      prnIntTable(b[i], 3);
   }
}

int main(void) {
   int a[4][3][5] =
   {
      {                                                 // 0
         // 0   1     2    3    4
         { 10,  20,  30,  40,  50 },    // 0
         { 110, 120, 130, 140, 150 },   // 1
         { 210, 220, 230, 240, 250 }    // 2
      },
      {                                                  // 1
         { 100,  200,  300,  400,  500 },
         { 1100, 1200, 1300, 1400, 1500 },
         { 2100, 2200, 2300, 2400, 2500 }
      },
      {                                                 // 2
         { 101,  201,  301,  401,  501 },
         { 1101, 1201, 1301, 1401, 1501 },
         { 2101, 2201, 2301, 2401, 2501 }
      },
      {                                                // 3 
         { 102,  202,  302,  402,  502 },
         { 1102, 1202, 1302, 1402, 1502 },
         { 2102, 2202, 2302, 2402, 2502 }
      }
   };
   prnTables(a, 4);
   return 0;
}