#ifndef SDDS_MOVIE_H
#define SDDS_MOVIE_H
#include <stdio.h>
struct Movie {
   char title[61];
   int year;
};
int loadMovie( struct Movie* mptr, FILE* fptr );

#endif // !SDDS_MOVIE_H
