#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <stdio.h>
struct Name {
   char data[51];
};

int main( void ) {
   struct Name n1={"Farnk" }, n2;
   n2 = n1;
   return 0;
}