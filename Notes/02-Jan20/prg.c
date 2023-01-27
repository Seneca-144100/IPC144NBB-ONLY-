#define  _CRT_SECURE_NO_WARNINGS // no warning on stdio functions
#include <stdio.h>
/*
Format specifiers   %whatever
%d   integer
%f   floats
%lf  doubles
%c   single character

*/

int main(void) {
   int num1;
   int num2;
   int sum;
   printf("Enter Two numbers:\n1> ");
   scanf("%d", &num1);
   printf("2> ");
   scanf("%d", &num2);
   sum = num1 + num2;
   printf("The sum is: %d\n", sum);
   return 0;
 }
