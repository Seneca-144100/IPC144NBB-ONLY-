#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
   printf("%c\n", 'A');
   printf("%c\n", 65);
   printf("%d\n", 'A');
   printf("%d\n", 65);
   int i;
   for (i = 0; i < 26; i++) {
      printf("%c", 'A' + i);
   }
   putchar('\n');
   for (i = 'A'; i <= 'Z'; i++) {
      printf("%c", i);
   }
   putchar('\n');
   char ch = 'W';
   putchar(ch);
   ch += ('a' - 'A'); // lower casing the 'W' inside ch;
   putchar(ch);
   putchar('\n');
   return 0;
}