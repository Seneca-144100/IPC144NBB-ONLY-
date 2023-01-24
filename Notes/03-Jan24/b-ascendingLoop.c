#define  _CRT_SECURE_NO_WARNINGS // no warning on stdio functions
#include <stdio.h>
/*
A: 10
B = 20

C = A + B 
 
 B = A = C;
 A and B are 30
 A = 11
 B = 4;
 C = A - 4;
 C is 6
 C = A + 4;
 C = 14;
 C = A / B;

 C = A % B;

 C = B % 2;

 C = A > B;
 C = A == B;


 >
 <
 >=
 <=
 ==
 !=




\
*/
void cal_sum(void);
int main(void) {
   int num = 0;

   while (num < 3) {
      printf("%d: ", num+1);
      cal_sum();
      //     num = num + 1;   // num++;
      num++;
   }

   return 0;
}


void cal_sum(void) {
   int num1;
   int num2;
   int sum;
   printf("Enter Two numbers:\n");
   printf("> ");
   scanf("%d", &num1);
   printf("> ");
   scanf("%d", &num2);
   sum = num1 + num2;
   printf("The sum is: [%d]\n", sum);
}