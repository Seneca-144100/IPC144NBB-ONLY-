#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "Student.h"
#include "utils.h"
void prnStudent(struct Student S) {
   printf("Name: %s\nStudent Number: %d\nGPA: %.1lf\n",
          S.name, S.stno, S.gpa);
}

int isEmpty(struct Student S) {
   int ret = 0;
   if(S.stno == 0) {
      ret = 1;
   }
   return ret;
}

struct Student getStudent(FILE* inputfile) {
   struct Student S = { 0 };
   if(fscanf(inputfile, "%[^,],%d,%lf", S.name, &S.stno, &S.gpa) != 3) {
      S.stno = 0; // setEmtpy;
   }
   else {
      fflushKey(inputfile);
   }
   return S;
}

void listStudents(struct Student S[], int size) {
   printf("Row- Student Name                            Stno      GPA\n"
          "----------------------------------------------------------\n");
   for(int i = 0; i < size; i++) {
      printf("%3d-% -40s %9d %3.1lf\n", i + 1, S[i].name, S[i].stno, S[i].gpa);
   }
}