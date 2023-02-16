/***********************************************************************
// IPC Workshop 5 p1: printReport tester porgram
//
// File	main.c
// Version 1.0
// Date Winter 2022
// Author  Fardad Soleimanloo
// Description
//
// This file demonstrates who the printReport function
// is clalled.
//
// Revision History
// -----------------------------------------------------------
// Name            Date            Reason
//
/////////////////////////////////////////////////////////////////
***********************************************************************/
#include "classList.h"
int main() {
   int stno[4] = { 12345, 23456, 345678, 45678 };
   int mark[4] = { 55,66,44,88 };
   printReport("IPC144NBB", stno, mark, 4);
   return 0;
}