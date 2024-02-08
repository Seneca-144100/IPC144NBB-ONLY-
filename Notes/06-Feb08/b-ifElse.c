#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

char grade( int markOutOf100 );

int main( void ) {
   int mark ;
   for ( mark = -1; mark < 102; mark++ ) {
      printf( "%c ", grade( mark ) );
   }
   putchar( '\n' );
   return 0;
}

char grade( int m ) {  // one of many or else and 
                       // if else does not exist, it will be one of many or none
   char g;
   if ( m < 0 ) {
      g = 'X';
   }
   else if ( m < 50 ) {
      g = 'F';
   }
   else if ( m < 60 ) {
      g = 'D';
   }
   else if ( m < 70 ) {
      g = 'C';
   }
   else if ( m < 80 ) {
      g = 'B';
   }
   else if ( m < 90 ) {
      g = 'A';
   }
   else if ( m <= 100 ) {
      g = '+';
   }
   else {
      g = 'X';
   }
   return g;
}

//char grade( int m ) {
//   char g;
//   if ( m < 0 ) {
//      g = 'X';
//   }
//   else { // m >=0
//      if ( m < 50 ) {
//         g = 'F';
//      }
//      else {  // m>= 50
//         if ( m < 60 ) {
//            g = 'D';
//         } // m > =60
//         else {
//            if ( m < 70 ) {
//               g = 'C';
//            }
//            else {
//               // and the rest
//            }
//         }
//      }
//   }
//   return g;
//}
