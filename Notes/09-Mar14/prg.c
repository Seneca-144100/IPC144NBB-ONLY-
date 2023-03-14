#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "utils.h"
#include "Student.h"


int main(void) {
   FILE* file = fopen("students.csv", "r");
   struct Student S[100] = { {0} }; // set everything to zero
   struct Student max = { 0 }, min = { 0 };
   int noOfRecords;
   int i = 0;
   do {
      S[i] = getStudent(file);
   } while(!isEmpty(S[i++]));
   noOfRecords = i - 1;
   for(i = 0; i < noOfRecords; i++) {
      if(i == 0) {
         max = min = S[i];
      }
      else {
         if(max.gpa < S[i].gpa) {
            max = S[i];
         }
         if(min.gpa > S[i].gpa) {
            min = S[i];
         }
      }
   }
   listStudents(S, noOfRecords);
   printf("Highest GPA:\n");
   prnStudent(max);
   printf("Lowest GPA:\n");
   prnStudent(min);
   fclose(file);
   return 0;
}


