#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "utils.h"

struct Item {
   double price;
   int sku;
   int qty;
   char name[41];
};
void prnItems( const struct Item array[], int num );
void readItems( struct Item array[], int num );
void prnItem( struct Item A );
struct Item readItem( void );



int main( void ) {
   struct Item I[100] = { 0 };
   readItems( I, 2 );
   prnItems(I, 2 );
   return 0;
}

void prnItems( const struct Item array[], int num ) {
   int i;
   double totalPrice = 0;
   printf( "Name                                     SKU   Quantity  price\n"
      "----------------------------------------+-----+--------+---------\n" );
   for ( i = 0; i < num; i++ ) {
      prnItem( array[i] );
   }
   printf( "----------------------------------------+-----+--------+---------\n"
      "        Total: %9.2lf", totalPrice );
}
void readItems( struct Item array[], int num ) {
   int i;
   printf( "Enter %d Item information:\n", num );
   for ( i = 0; i < num; i++ ) {
      printf( "Enter Item number %d:\n", i + 1 );
      array[i] = readItem( );
   }
}

void prnItem( struct Item A ) {
   printf( "%-40s|%-5d|%7d |%9.2lf\n", A.name, A.sku, A.qty, A.price );
}

struct Item readItem( void ) {
   struct Item toRead;
   printf( "Item name\n> " );
   // scanf( "%[^X]" , cstring); X is the character to stop at
   scanf( "%[^\n]", toRead.name );
   printf( "SKU\n> " );
   scanf( "%d", &toRead.sku );
   printf( "Price\n> " );
   scanf( "%lf", &toRead.price );
   printf( "Quantity\n> " );
   scanf( "%d", &toRead.qty );
   printf( "--------------------------------\n" );
   flushKey( );
   return toRead;
}
