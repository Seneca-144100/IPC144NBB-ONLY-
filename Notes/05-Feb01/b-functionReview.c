#define  _CRT_SECURE_NO_WARNINGS // no warning on stdio functions
#include <stdio.h>
void cal_sum( void ); // prototype to introduce the function to calling functions

int main( void ) {
   printf( "IPC144NBB - 05- Feb01!\n" );
   cal_sum( );
   return 0;
}


void cal_sum( void ) {
   int num1;
   int num2;
   int sum;
   printf( "Enter Two numbers:\n" );
   printf( "> " );
   scanf( "%d", &num1 );
   printf( "> " );
   scanf( "%d", &num2 );
   sum = num1 + num2;
   printf( "The sum is: [%d]\n", sum );
}