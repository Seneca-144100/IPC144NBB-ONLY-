// IPC Workshop 5: tester program
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
   struct Student std[100];
   int num;
   printf("Enter number of the student records\n> ");
   num = getInt();
   readStudentInfo(std, num);
   printReport(std, num);
   return 0;
}
