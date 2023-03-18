#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "utils.h"
#include "Student.h"

/*content of students.csv as really is in file

Abraham Simpson,324543,3.9\nAlice Glick,459608,1.9\nAllison Taylor,747954,3.2.....
Alice Glick,459608,1.9\nAllison Taylor,747954,3.2.....
                                                           
*/

int main(void) {
   FILE* file = fopen("students.csv", "r");
   struct Student S = { 0 };
   int i = 0;
   do {
      S = getStudent(file);
      if(!isEmpty(S)) {
         printf("%d >>>>\n", ++i);
         prnStudent(S);
         printf("------------------------------------\n");
      }
   } while(!isEmpty(S));
   fclose(file);
   return 0;
}


