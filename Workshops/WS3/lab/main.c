/***********************************************************************
// IPC Workshop 3 p1: tester program
//
// File	main.c
// Version 1.0
// Date Winter 2022
// Author  Fardad Soleimanloo
// Description
//
// This file will be replaced by another tester program during the submission
//
// Revision History
// -----------------------------------------------------------
// Name            Date            Reason
//
/////////////////////////////////////////////////////////////////
***********************************************************************/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int getNoOfStudents(void);
int getAverage(int NumberOfStudents);
void printReport(int NumberOfStudents, int average);
int main(void) {
   int num;
   int average;
   printf("Class test marks report program...\n\n");
   num = getNoOfStudents();
   average = getAverage(num);
   printReport(num, average);
   return 0;
}
