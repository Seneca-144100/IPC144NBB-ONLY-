#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "student.h"
#include "utils.h"
void displayMenu( void ) {
   printf(
      "R- Load Student (R)ecords\n"
      "L- (L)ist records\n"
      "N- Sort by (N)ame\n"
      "x- e(x)it\n> "
   );
}
char getUserSelection( void ) {
   char ret = getchar( );
   flushKey( );
   return ret;
}
int main( void ) {
   struct Student std[MAX_STD_COUNT];
   int noOfStd = 0;
   int done = 0;
   char selection = 0;
   while ( !done ) {
      displayMenu( );
      selection = getUserSelection( );
      switch ( selection ) {
      case 'l':
      case 'L':
         listStudents( noOfStd, std );
         break;
      case 'r':
      case 'R':
         noOfStd = load( "students.csv", std );
         printf( "Loaded %d student records\n", noOfStd );
         break;
      case 'n':
      case 'N':
         sortByName( noOfStd, std );
         printf( "Sorted!\n" );
         break;
      case 'x':
      case 'X':
         done = 1;
         break;
      default:
         printf( "Invalid selection!\n" );
      }
   }
   printf( "Goodbye!\n" );

   return 0;
}
