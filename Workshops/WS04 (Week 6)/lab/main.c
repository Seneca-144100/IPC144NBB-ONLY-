// IPC Workshop 4: tester program
//
// File  main.c
// Version 1.0
// Author  Fardad Soleimanloo
//
// This file may be replaced by another tester program during the submission
//
// Revision History
// -----------------------------------------------------------
// Name            Date            Reason
//
/////////////////////////////////////////////////////////////////
#include <stdio.h>
#include "utils.h"
#include "report.h"

int main(void) {
   int stdno[100] = { 0 };
   float mark[100] = { 0.0 };
   int num;
   printf("Enter number of the student records\n> ");
   num = getInt();
   readStudentInfo(stdno, mark, num);
   printReport(stdno, mark, num);
   return 0;
}
