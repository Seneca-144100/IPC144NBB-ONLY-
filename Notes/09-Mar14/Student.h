#ifndef SDDS_STUDENT_H
#define SDDS_STUDENT_H
#include <stdio.h>
struct Student {  // compound type
   char name[61];
   int stno;
   double gpa;
};

void prnStudent(struct Student S);
struct Student getStudent(FILE* inputfile);
int isEmpty(struct Student S);
void listStudents(struct Student S[], int size);

#endif // !SDDS_STUDENT_H
