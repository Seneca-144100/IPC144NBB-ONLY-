#include <stdio.h>
int foo(char ch) {
   int i;
   for (i = 0; i < 2; i++) {
      putchar(++ch);
   }
   printf("\n%d\n*", i);
   return i++;
}
void main() {
   char ch = 'A';
   double ret;
   ret = foo(ch) + 12.5678;
   printf("%-3c%09.2lf\n", ch,ret);
   return 0;
}