#ifndef SENECA_STUDENT_H
#define SENECA_STUDENT_H

#define MAX_STD_COUNT 100

struct Student {
   char name[61];
   //   unsigned int stno; could be unsigned and read and printed using %u
   int stno; 
   float gpa;
};

/// <summary>
/// reads student infromat from a file (comma-separated
/// </summary>
/// <param name="filename">CSV Data file name</param>
/// <param name="std">Arrays of Student structured to be read into</param>
/// <returns>number of recoreds read or -1 if file can not be opened</returns>
int load( const char filename[], struct Student std[] );
int readStudent( FILE* file, struct Student* sp );
void listStudents( int noOfstd,const struct Student std[] );
void sortByName( int noOfstd, struct Student std[] );
#endif // !SENECA_STUDENT_H
