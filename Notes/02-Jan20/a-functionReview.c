#include <stdio.h>
/*

 char short int long (long long)
 float  double  (long double)


*/


void greetings(void);
void goodbye(void);
void line(void);

int main(void) {
   int num;
   int value = 10;
   float fnum;
   greetings();
   num = 25;
   fnum = 25.123;
   num = value + 32;
   printf("integer num is %d, and float fnum is %f\n", num, fnum);
   goodbye();
   return 0;
}

void greetings(void) {
   printf("\tHello IPC144NBB!!!!\n");
   line();
   putchar('\n');
}
void goodbye(void) {
   line();
   printf("\tGoodbye everyone\n\n");
}
void line(void) {
   printf("------------------------------------------------\n");
}