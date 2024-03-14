/***************************************************************
* IPC144 NBB Workshop 2
*
* File main.c
*
* Date: winter of 2024
*
* Author: Fardad Soleimanloo
*
* Description:
* This program runs the calculateAverageMark() function written
* in "marks.c" to calculate the average of the marks received 
* by a student. 
* 
* The calculateAverageMark() function also used utils.c for
* date entry.
* 
* 
* In Linux-Max/gcc invornment compile and run the code as follows
* gcc utils.c marks.c main.c -Wall -o ws<ENTER>
*
* Run the program as follows:
* ./ws<ENTER>
*
*
* Revisions:
* Date    By              Reason
* -----   --------------  ---------------------------
* N/A
****************************************************************/

#include <stdio.h>
double calculateAverageMark(void);
int main(void) {
   double averageMark;
   printf("---===<<<  Student Marks Average Calculator >>>===---\n\n");
   averageMark = calculateAverageMark();
   printf("Your average mark is: %.1lf\n", averageMark);
   return 0;
}