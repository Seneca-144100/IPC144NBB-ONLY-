#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void flushKey(void);
int main(void) {
   char grade;
   printf("Enter the grade: ");
   grade = getchar();
   flushKey();
   if (grade == 'A') {
      printf("Excellent!\n");
   }
   else if (grade == 'B') {
      printf("Very good!\n");
   }
   else if (grade == 'C') {
      printf("OK!\n");
   }
   else if (grade == 'D') {
      printf("Work harder!\n");
   }
   else {
      printf("You need to work much harder!\n");
   }
   return 0;
}