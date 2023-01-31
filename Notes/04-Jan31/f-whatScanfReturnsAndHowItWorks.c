#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
   int a = 100;
   double d = 100.123;
   char ch = 'X';
   printf("Before: int: %d, double: %.3lf, char: %c\n", a, d, ch);
   printf("Enter an int, a double and a character, comma separated: ");
   a = scanf("%d,%lf,%c", &a, &d, &ch);
   printf("Scanf returned: %d\n", a);
   printf("After:  int: %d, double: %.3lf, char: %c\n", a, d, ch);
   return 0;
}

