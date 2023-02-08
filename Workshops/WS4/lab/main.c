/***********************************************************************
// IPC Workshop 4 p1: tester program
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
#include "utils.h"
#include "rental.h"
int main(void) {
   printf("Welcome to Seneca Ski Equipment Rentals...\n"
          "------------------------------------------\n");
   do {
      rental();
      printf("Exit Program? ");
   } while(!yes());

   return 0;
}
