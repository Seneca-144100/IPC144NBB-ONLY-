/***************************************************************
* IPC144 NBB Workshop 2 (DIY)
*
* File main.c
*
* Date: winter of 2024
*
* Author: Fardad Soleimanloo
*
* Description:
* This program test DIY section of workshop 2
* 
* In Linux-Max/gcc invornment compile and run the code as follows
* gcc utils.c draw.c main.c -Wall -o ws<ENTER>
*
* Run the program as follows:
* ./ws<ENTER>
*
* Revisions:
* Date    By              Reason
* -----   --------------  ---------------------------
* N/A
****************************************************************/

#include <stdio.h>
int getInt(void);
void rectangle(char leftTop, char top, char topRight,
   char right, char rightButtom, char buttom,
   char buttomLeft, char left, char fill,
   int width, int height);

int main(void) {
   int counter = 0;
   int width;
   int height;
   int noOfDraws;
   char fill = 'A';
   printf("How many Rectangles?\n> ");
   noOfDraws = getInt();
   while (counter < noOfDraws) {
      printf("Rectange number %d:\n-----------------------\n", counter + 1);
      printf("Width:\n> ");
      width = getInt();
      printf("Height:\n> ");
      height = getInt();
      rectangle('+', '-', '+', '|', '+', '-', '+', '|', fill, width, height);
      fill = fill + 1;
      counter = counter + 1;
   }
   return 0;
}