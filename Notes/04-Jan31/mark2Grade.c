#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int getMark();
void mark2Grade() {
   int mark;
   mark = getMark();
   if (mark >= 0 && mark < 50) {
      printf("F");
   }
   else if (mark >= 50 && mark < 60) {
      printf("D");
   }
   else if (mark >= 60 && mark < 70) {
      printf("C");
   }
   else if (mark >= 70 && mark < 80) {
      printf("B");
   }
   else if (mark >= 80 && mark < 90) {
      printf("A");
   }
   else if (mark >= 90 && mark <= 100) {
      printf("A+");
   }
   else {
      printf("%d is not a valid mark!", mark);
   }
   putchar('\n');
}

int getMark() {
   int mark;
   printf("Mark: ");
   scanf("%d", &mark);
   return mark;
}