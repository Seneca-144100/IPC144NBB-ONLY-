/***********************************************************************
// IPC Project MS1 : tester program
//
// File	main.c
// Version 1.0
// Author  Fardad Soleimanloo
// Description
//
//  Add the code required as commented below
//
// Revision History
// -----------------------------------------------------------
// Name            Date            Reason
//
/////////////////////////////////////////////////////////////////
***********************************************************************/
#include <stdio.h>
#include "POS.h"
#include "PosUI.h"
int main() {
   printf("Testing POS.h defined values:\n");
   if(TAX - 0.13 < 0.00001 && 0.13 - TAX < 0.00001) {
      printf("TAX value is corrct!\n");
   } else {
      printf("The defined value for TAX is incorrect!\n");
   }
   if(MAX_SKU_LEN == 6) {
      printf("MAX_SKU_LEN value is corrct!\n");
   } else {
      printf("MAX_SKU_LEN defined value for TAX is incorrect!\n");
   }
   if(MAX_STOCK_NUMBER == 999) {
      printf("MAX_STOCK_NUMBER value is corrct!\n");
   } else {
      printf("MAX_STOCK_NUMBER defined value for TAX is incorrect!\n");
   }
   if(MAX_NO_ITEMS == 500) {
      printf("MAX_NO_ITEMS value is corrct!\n");
   } else {
      printf("MAX_NO_ITEMS defined value for TAX is incorrect!\n");
   }
   if(MAX_BILL_ITEMS == 10) {
      printf("MAX_BILL_ITEMS value is corrct!\n");
   } else {
      printf("MAX_BILL_ITEMS defined value for TAX is incorrect!\n");
   }
   runPos("posdata.csv");
   return 0;
}

