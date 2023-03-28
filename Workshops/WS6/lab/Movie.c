#include "Movie.h"

int loadMovie( struct Movie* mptr, FILE* fptr ) {
   return (fscanf( fptr, "%[^\t]\t%d\t", mptr->title, &mptr->year ) == 6);
}
