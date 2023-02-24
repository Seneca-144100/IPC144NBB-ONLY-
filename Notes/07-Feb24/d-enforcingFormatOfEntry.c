#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "utils.h"

int main() {
   char name[128];
   int age;
   int year, mon, day;
   printf("Name and age separated by comma: ");
   // Home Simpson,45<ENTER>
   scanf("%[^,],%d", name, &age);
   printf("Hello %s you are %d years old!\n", name, age);
   printf("Enter date in following format, YYYY/MM/DD<ENTER>\n> ");
   if(scanf("%d/%d/%d", &year, &mon, &day) != 3) {
      printf("Bad format!");
   }
   else {
      printf("the date is %d-%d-%d\n", year, mon, day);
   }
   return 0;
}