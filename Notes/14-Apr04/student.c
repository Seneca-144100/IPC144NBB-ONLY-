#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include "student.h"
#include "utils.h"
int readStudent(FILE* file, struct Student* sp ) {
   int ret = 0;
   int newline = 0;
   //if ( fscanf( file, "%[^,],%d,%f", sp->name, &sp->stno, &sp->gpa ) == 3 ) {
   //   ret = 1;
   //}
   ret = fscanf( file, "%[^,],%d,%f", sp->name, &sp->stno, &sp->gpa ) == 3;
   do {
      newline = fgetc( file );
   } while (  newline != '\n'  && newline != EOF);
   return ret;
}
void listStudents( int noOfstd,const struct Student std[] ) {
   int i;
   printf( "Row Name                           Std #  GPA\n"
      "---+------------------------------+------+---\n" );
   for ( i = 0; i < noOfstd; i++ ) {
      printf( "%03d|%-30s|%06d|%3.1f\n",i+1, std[i].name,std[i].stno,std[i].gpa );
   }
   printf("---+------------------------------+------+---\n" );
}
void swap( struct Student* s1, struct Student* s2 ) {
   struct Student temp = *s1;
   *s1 = *s2;
   *s2 = temp;
}

void sortByName( int noOfstd, struct Student std[] ) {
   int i, j;
   for ( i = 0; i < noOfstd - 1; i++ ) {
      for ( j = 0; j < noOfstd - i - 1; j++ ) {
         if ( strcmp( std[j].name, std[j + 1].name ) > 0 ) {
            swap( &std[j], &std[j + 1] );
         }
      }
   }
}
int load( const char filename[], struct Student std[] ) {

   int cnt = 0;
   FILE* file = fopen( filename, "r" );
   while (file && cnt < MAX_STD_COUNT && readStudent(file, &std[cnt] ) ) {
      cnt++;
   }
   if ( file ) {
      fclose( file );
   }
   else {
      cnt = -1;
   }
   return cnt;
}
