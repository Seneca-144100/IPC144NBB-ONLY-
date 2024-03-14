#include "item.h"

int main( void ) {
   struct Item I[MAX_NO_OF_PRODUCTS] = { 0 };
   readItems( I, 2 );
   prnItems(I, 2 );
   return 0;
}

