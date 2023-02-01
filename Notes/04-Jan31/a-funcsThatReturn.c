#include <stdio.h>
int returnsOneHandred();

int main(void) {
   int a;
   a = returnsOneHandred();
   printf("%d\n", a);
   return 0;
}

int returnsOneHandred() {
   return 100;
}