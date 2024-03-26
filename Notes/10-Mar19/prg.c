#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "utils.h"
void getStNoAndMark( int* sptr, double* dptr ) {
   printf( "Enter Student Number: " );
   *sptr = getInt( );
   printf( "Enter the mark: " );
   *dptr = getDbl( );
}

int main(void) {
   double mark = 0.0;
   int stno =0 ;
   getStNoAndMark( &stno, &mark ); // getStNoAndMark( int* sptr = &stno, double* dptr = &mark);
   printf( "The mark is: %.1f\n", mark );
   printf( "The student number is: %d\n", stno );
   return 0;
}
