#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "utils.h"
#include "item.h"

void prnItems( const struct Item array[], int num ) {
   int i;
   double totalPrice = 0;
   printf( "Name                                     SKU   Quantity  price\n"
      "----------------------------------------+-----+--------+---------\n" );
   for ( i = 0; i < num; i++ ) {
      prnItem( &array[i] );
   }
   printf( "----------------------------------------+-----+--------+---------\n"
      "        Total: %9.2lf", totalPrice );
}
void readItems( struct Item array[], int num ) {
   int i;
   printf( "Enter %d Item information:\n", num );
   for ( i = 0; i < num; i++ ) {
      printf( "Enter Item number %d:\n", i + 1 );
      readItem( &array[i] );
   }
}
// (*Iptr) can be written as Iptr->
void prnItem( const struct Item* Iptr ) {
   printf( "%-40s|%-5d|%7d |%9.2lf\n", 
        Iptr->name, Iptr->sku, 
        Iptr->qty, Iptr->price );
}

void readItem( struct Item* Iptr ) {
   printf( "Item name\n> " );
   // scanf( "%[^X]" , cstring); X is the character to stop at
   getLine( Iptr->name );
   printf( "SKU\n> " );
   Iptr->sku = getInt();
   printf( "Price\n> " );
   Iptr->price = getDbl( );
   printf( "Quantity\n> " );
   Iptr->qty = getInt( );
   printf( "--------------------------------\n" );
}
