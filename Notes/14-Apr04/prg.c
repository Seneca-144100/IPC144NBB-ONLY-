#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
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
void prnInts(const int a[], int size) {
   int i;
   for(i = 0; i < size; i++) {
      printf("%d%s", a[i], (i != size - 1) ? ", ": "\n");
   }
}
void prnStds(const struct Student a[], int size) {
   int i;
   for(i = 0; i < size; i++) {
      printf("%3d- %s: %d[%.1lf]\n",(i+1), a[i].name, a[i].stno, a[i].gpa);
   }
}
void sortFunc(void) {
   int a[5] = { 5, 1, 4, 2 ,8 };
   sortInts(a, 5);
   prnInts(a, 5);
}
int readStd(struct Student* s, FILE* f) {
   int res = fscanf(f, "%[^,],%d,%lf", s->name, &s->stno, &s->gpa) == 3;
   while(res && fgetc(f) != '\n');
   return res;
}


int main(void) {
   struct Student s[50];
   int noOfStd;
   FILE* fptr = fopen("students.csv", "r");
   for(noOfStd = 0; readStd(&s[noOfStd], fptr); noOfStd++);
   prnStds(s, noOfStd);
   fclose(fptr);
   return 0;
}

