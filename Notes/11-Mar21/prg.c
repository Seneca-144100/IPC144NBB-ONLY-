#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "utils.h"

struct Student {
   char name[41];
   int stno;
};


void prnInt( int i ) {
   printf( "int: %d\n", i );
}

void prnStudent(const struct Student* S ) {
   printf( "%09d: %s\n", (*S).stno, S->name );
}
struct Student getStudentStrc() {
   struct Student S;
   printf( "Name: " );
   scanf( "%[^\n]", S.name );
   printf( "Student number: " );
   scanf( "%d", &S.stno );
   return S;
}
void getStudent( struct Student* sptr ) {
   printf( "Name: " );
   scanf( "%[^\n]", sptr->name );
   printf( "Student number: " );
   scanf( "%d", &sptr->stno );
}
int main(void  ) {
   struct Student A = { "Fred Soley", 12345678 };
   int a = 123;
   printf( "size of students: %d\n", sizeof( A ) );
   prnStudent( &A );  // prnStudent(const struct Student* S = &A);
   getStudent( &A );  // getStudent( struct Student* sptr  = &A);
   prnStudent( &A );  // prnStudent(const struct Student* S = &A);
//   prnInt( a );   // prnInt(int i = a)
   return 0;
}