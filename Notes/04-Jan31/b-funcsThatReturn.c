#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int getInt();

int main(void) {
   int a;
   printf("Enter an integer: ");
   a = getInt();
   printf("you enterd: %d\n", a);
   return 0;
}

int getInt() {
   int value;
   scanf("%d", &value);
   return value;
}