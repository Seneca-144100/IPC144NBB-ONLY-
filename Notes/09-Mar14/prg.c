#include "item.h"
#include "utils.h"
struct Name {
   char first[21];
   char last[31];
};

void printName( struct Name n ) {
   printf( "%s %s", n.first, n.last );
}

int main( void ) {
   struct Name name = { "Fardad", "Soleimanloo" },
      another;

   another = name;

   strCpy( name.first, "Fred" );
   strCpy( name.last, "Soley" );
   printName( name );
   putchar( '\n' );
   printName( another );
   putchar( '\n' );

   return 0;
}

