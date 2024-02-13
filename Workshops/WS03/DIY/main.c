/***********************************************************************
// IPC Workshop 3 p2: tester program
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
#include <stdio.h>
#include "marks.h"   // repeating includes are done on purpose
#include "marks.h"
#include "marks.h"
#include "marks.h"
#include "report.h"
#include "report.h"
#include "report.h"
#include "report.h"

int main(void) {
   int noOfStds = getNoOfStudents();
   while (noOfStds == 0) {
      noOfStds = getNoOfStudents();
   }
   report(noOfStds);
   return 0;
}