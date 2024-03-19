#include <stdio.h>
#include "report.h"

int main(void) {
   int stdno[100] = { 0 };
   float mark[100] = { 0.0 };
   printf("Enter the follwing:\n"
      "123123\n"
      "66.6\n"
      "234234\n"
      "55.5\n"
      "345345\n"
      "99.8\n"
      "----------------------\n"
   );
   readStudentInfo(stdno, mark, 3);
   printReport(stdno, mark, 3);
   return 0;
}
