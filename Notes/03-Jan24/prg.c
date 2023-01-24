#define  _CRT_SECURE_NO_WARNINGS // no warning on stdio functions
#include <stdio.h>

void cal_sum(void);
void calcs(int times);

int main(void) {
   int noOfTimes;
   printf("How many times calcuations need to be done?\n> ");
   scanf("%d", &noOfTimes);
   calcs(noOfTimes);
   return 0;
}




void calcs(int times) {
   int i = 0;
   while (i < times) {
      printf("%d: ", i + 1);
      cal_sum();
      i++;
   }
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