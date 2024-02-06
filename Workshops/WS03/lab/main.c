/***********************************************************************
// IPC Workshop 3 p1: tester program
//
// File	main.c
// Version 1.0
// Date Winter 2024
// Author  Fardad Soleimanloo
// Description
//
// This file may be replaced by another tester program during the submission
//
// Revision History
// -----------------------------------------------------------
// Name            Date            Reason
//
/////////////////////////////////////////////////////////////////
***********************************************************************/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// Functions developed by the students:
void prnGrade(char letterGrade);
char grade(int markOutOf100);
int getNoOfStudents(void);
int getMark(int maximumAcceptableMarkValue);

// Unit test for Student Functions:
void prnGradeTester(void); 
void gradeTester(void);
void getNoOfStudentsTester(void);
void getMarkTester(void);
void testerProgram(void);

int main(void) {
   prnGradeTester();
//   gradeTester();
//   getNoOfStudentsTester();
//   getMarkTester();
//   testerProgram();
   return 0;
}


void getNoOfStudentsTester(void) {
   printf("START: int getNoOfStudents(void); tester\n"
          "First and last lines must print errors and return zero\n"
          "Two middle lines should return 5 and 35\n");
   int nos;
   printf(">>>>>Enter 4\n");
   nos = getNoOfStudents();
   printf("Returned: ->%d<-\n", nos);

   printf(">>>>>Enter 5\n");
   nos = getNoOfStudents();
   printf("Returned: ->%d<-\n", nos);

   printf(">>>>>Enter 35\n");
   nos = getNoOfStudents();
   printf("Returned: ->%d<-\n", nos);

   printf(">>>>>Enter 36\n");
   nos = getNoOfStudents();
   printf("Returned: ->%d<-\n", nos);
   printf("END: int getNoOfStudents(void); tester\n\n");
}

void prnGradeTester(void) {
   char grade = 'A';
   printf("START: void prnGrade(char letterGrade); tester\nCharacters A to F should be printed, ending with A+\n");
   while (grade <= 'F') {
      prnGrade(grade);
      putchar('\n');
      grade++;
   }
   prnGrade('+');
   putchar('\n');
   printf("END: void prnGrade(char letterGrade); tester\n\n");
}

void gradeTester(void){
   int mark = -1;
   printf("START: char grade(int markOutOf100); tester\n"
          "Starting and ending with X, 100 grades from F to A and '+' should be printed\n");
   while (mark <= 101) {
      putchar(grade(mark));
      mark++;
   }
   putchar('\n');
   printf("END: char grade(int markOutOf100); tester\n\n");
}

void getMarkTester(void){
   printf("START: int getMark(int maximumAcceptableMarkValue); tester\n");
   printf(">>>Enter -20\n");
   printf("Must return -1,\nYour function returned: %d\n\n", getMark(4));

   printf(">>>Enter -1\n");
   printf("Must return -1,\nYour function returned: %d\n\n", getMark(4));

   printf(">>>Enter 0\n");
   printf("Must return 0,\nYour function returned: %d\n\n", getMark(4));

   printf(">>>Enter 1\n");
   printf("Must return 25,\nYour function returned: %d\n\n", getMark(4));

   printf(">>>Enter 4\n");
   printf("Must return 100,\nYour function returned: %d\n\n", getMark(4));

   printf(">>>Enter 5\n");
   printf("Must return -1,\nYour function returned: %d\n\n", getMark(4));
   
   printf("END: int getMark(int maximumAcceptableMarkValue); tester\n\n");
}

void testerProgram(void){
   int nos;
   int mark;
   char grd;
   printf("Tester program!\n==================================\n");
   printf("Enter the following values:\n4\n5\n-1\n5\n10\n15\n17\n19"
          "\n==================================\n");
   nos = getNoOfStudents();
   while (nos < 5 || nos >35) {
      nos = getNoOfStudents();
   }
   while (nos > 0) {
      printf("%d %d %d %d -------\n", 6 - nos, 6 - nos, 6 - nos, 6 - nos);
      mark = getMark(20);
      while (mark < 0) {
         mark = getMark(20);
      }
      grd = grade(mark);
      printf("    Mark: %d%%, Grade: ", mark);
      prnGrade(grd);
      putchar('\n');
      nos--;
   }
   printf("END Tester program!\n==================================\n");
}