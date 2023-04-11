#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "utils.h"
#define Sort_By_Name 1
#define Sort_By_ID 2
#define Sort_By_GPA 3

struct Student {
   char name[81];
   int stno;
   double gpa;
};
void sortInts(int ar[], int size) {
   int i, j;
   for(i = 0; i < size - 1; i++) {
      for(j = 0; j < size - i - 1; j++) {
         if(ar[j] > ar[j + 1]) {
            int temp = ar[j];
            ar[j] = ar[j + 1];
            ar[j + 1] = temp;
         }
      }
   }
}

void sortStudents(struct Student* ar[], int size, int sortBy) {
   int i, j;
   for(i = 0; i < size - 1; i++) {
      for(j = 0; j < size - i - 1; j++) {
         switch(sortBy) {
         case Sort_By_Name:
            if(strCmp(ar[j]->name, ar[j + 1]->name) > 0) {
               struct Student* temp = ar[j];
               ar[j] = ar[j + 1];
               ar[j + 1] = temp;
            }
            break;
         case Sort_By_ID:
            if(ar[j]->stno >  ar[j + 1]->stno) {
               struct Student* temp = ar[j];
               ar[j] = ar[j + 1];
               ar[j + 1] = temp;
            }
            break;
         case Sort_By_GPA:
            if(ar[j]->gpa > ar[j + 1]->gpa) {
               struct Student* temp = ar[j];
               ar[j] = ar[j + 1];
               ar[j + 1] = temp;
            }
            break;
         }
      }
   }
}

void prnStudent(const struct Student* s) {
   printf("%-40s %06d [%3.1lf]\n",  s->name, s->stno, s->gpa);
}

void prnStds(const struct Student a[], int size) {
   int i;
   for(i = 0; i < size; i++) {
      printf("%3d: ", (i + 1));
      prnStudent(&a[i]);
   }
   printf("============================================================\n");
}

void prnStdPtrs(const struct Student* a[], int size) {
   int i;
   for(i = 0; i < size; i++) {
      printf("%3d: ", (i + 1));
      prnStudent(a[i]);
   }
   printf("============================================================\n");
}

int readStd(struct Student* s, FILE* f) {
   int res = fscanf(f, "%[^,],%d,%lf", s->name, &s->stno, &s->gpa) == 3;
   while(res && fgetc(f) != '\n');
   return res;
}



int main(void) {
   struct Student s[50];
   struct Student* name[50];
   struct Student* stno[50];
   struct Student* gpa[50];
   int noOfStd;
   int i;
   for(i = 0; i < 50; i++) name[i] = &s[i];
   for(i = 0; i < 50; i++) stno[i] = &s[i];
   for(i = 0; i < 50; i++) gpa[i] = &s[i];


   FILE* fptr = fopen("students.csv", "r");

   for(noOfStd = 0; fptr && readStd(&s[noOfStd], fptr); noOfStd++);
   sortStudents(name, noOfStd, Sort_By_Name);
   prnStdPtrs(name, noOfStd);
   sortStudents(stno, noOfStd, Sort_By_ID);
   prnStdPtrs(stno, noOfStd);
   sortStudents(gpa, noOfStd, Sort_By_GPA);
   prnStdPtrs(gpa, noOfStd);
   prnStds(s, noOfStd);
   if(fptr) fclose(fptr);
   return 0;
}

