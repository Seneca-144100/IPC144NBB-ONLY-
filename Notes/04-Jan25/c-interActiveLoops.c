#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main( void ) {
   int noOfLoops; // initially will have garbage in it
   int counter = 0; // intially will have zero in it
   printf( "Please enter the number of hellos:\n> " );
   scanf( "%d", &noOfLoops);
   while ( counter < noOfLoops ) {
      printf( "%d- Hello!\n", counter+1 );
      counter = counter + 1;
   }


   return 0;
}
