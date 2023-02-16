/***********************************************************************
// IPC Workshop 5 p2: tester program
//
// File	main.c
// Version 1.0
// Date Winter 2022
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
#include "classList.h"
#include "utils.h"
int main(void) {
   printf("Subject Performance report\n");
   printf("--------------------------\n");
   do {
      subjectMarksReport();
      printf(" Exit? ");
   } while(!yes());

   return 0;
}