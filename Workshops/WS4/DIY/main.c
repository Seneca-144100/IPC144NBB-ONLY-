/***********************************************************************
// IPC Workshop 4 p2: tester program
//
// File	main.c
// Version 1.0
// Date Winter 2022
// Author  Fardad Soleimanloo
// Description
//
// This file may be replaced by another tester program during the submission
// Do not change or modify this file in anyway at submission
// Revision History
// -----------------------------------------------------------
// Name            Date            Reason
//
/////////////////////////////////////////////////////////////////
***********************************************************************/
#include <stdio.h>
#include "calc.h"
int main(void) {
   printf("My Simple Calculator\n"
          "-------------------------\n"
          "Available operations:\n"
          "Addition:       +\n"
          "Subtraction:    -\n"
          "Multiplication: x\n"
          "Division:       /\n"
          "Exponentiation: ^\n"
          "Modulus:        %%\n"
          "-------------------------\n"
          "Command Example:\n"
          "[Question mark][First Number][Operation][Second Number]<ENTER>\n"
          "?12.2+32<ENTER> << -- User input\n"
          "44.200 << -- Program response\n"
          "To exit press <ENTER> only\n"
          "-------------------------\n");

   while(calc());
   printf("Goodbye!\n");
   return 0;
}
