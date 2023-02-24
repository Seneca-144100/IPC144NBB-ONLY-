#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "utils.h"
/*
*Student:
Name
student number
email
*/
/*
*Subject:
Name
prefix
code
section
Students
*/
struct Name {
   char first[51];
   char last[101];
};

struct Student {
   struct Name name;
   long stno;
   char email[256];
};

struct Subject {
   char name[256];
   char pre[4];
   int code;
   char section[4];
   int numberOfStudents; //obviously should not be more that 40;
   struct Student student[40];
};

// write these two functions and get big bonus!!! yaaaay!
// user should enter the number of students



struct Subject getSubject();
void printSubject(struct Subject S);

int main() {
   struct Subject S;
   S = getSubject();
   printSubject(S);
   return 0;
}