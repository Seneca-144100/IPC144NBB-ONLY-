#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "utils.h"
#include "item.h"

int main(void) {
   struct Item I = { 12.99,1234,10,"Butter" };
   prnItem( &I );    // prnItem( struct Item* Iptr = &I);

   readItem( &I );
   prnItem( &I );
   return 0;
}
