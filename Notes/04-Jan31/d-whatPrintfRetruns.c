#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
   int a = 123;
   a = printf("%d", a);
   printf("-%d\n", a);
   return 0;
}

