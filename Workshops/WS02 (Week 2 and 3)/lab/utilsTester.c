/***************************************************************
* IPC144 NBB Workshop 2
* 
* File utilsTestr.c
* 
* Date: winter of 2024
* 
* Author: Fardad Soleimanloo
* 
* Description:
* This is a "unit test" for the module "utils.c" it tests
* the functions getDouble() and getInt() to make sure they 
* work correctly before being used in the rest of the
* application
* 
* In Linux-Max/gcc invornment compile and run the code as follows
* gcc utils.c utilsTester.c -Wall -o ws2<ENTER>
* 
* Run the program as follows:
* ./ws2<ENTER>
* 
* 
* Revisions:
* Date    By              Reason
* -----   --------------  ---------------------------
* N/A
****************************************************************/
#include <stdio.h>
double getDouble(void);
int getInt(void);
int main(void) {
   double dval;
   int ival;
   printf("Please enter a double value\n> ");
   dval = getDouble();
   printf("Please enter an integer value\n> ");
   ival = getInt();
   printf("You have entered: %lf and %d ", dval, ival);

   return 0;
}