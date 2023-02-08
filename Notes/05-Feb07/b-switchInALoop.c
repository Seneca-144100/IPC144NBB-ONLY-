#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void flushKey(void);
void gradeMessage(char grade);
int yes(void);
int main(void) {
   char grade;
   do {
      printf("Enter the grade: ");
      grade = getchar();
      flushKey();
      gradeMessage(grade);
      printf("Continue? ");
   } while (yes());

   return 0;
}

void gradeMessage(char grade) {
   switch (grade) {
   case 'A':
   case 'a':
      printf("Excellent!\n");
      break;
   case 'B':
   case 'b':
      printf("Very good!\n");
      break;
   case 'C':
   case 'c':
      printf("OK!\n");
      break;
   case 'D':
   case 'd':
      printf("Work harder!\n");
      break;
   case 'F':
   case 'f':
      printf("You need to work much harder!\n");
      break;
   default:
      printf("Invalid Grade!\n");
   }
}