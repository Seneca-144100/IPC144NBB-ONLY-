#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "utils.h"
int getVIptr( int* ptr, int min, int max );

void getIptr(int* ptr );

int main(void) {
   int a;
   getIptr( &a );
   printf( "You ented: %d\n", a );

   if ( getVIptr( &a, 10, 20 ) ) {
      printf( "You entered: %d\n", a );
   }
   else {
      printf( "Invalid value(%d), min: 10, max: 20\n", a );
   }


   return 0;
}

int getVIptr( int* ptr, int min, int max ) {
   int ret = 0;

   return ret;
}

void getIptr( int* ptr ) {

}

