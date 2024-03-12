#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "utils.h"

struct Item {
   double price;
   int sku;
   int qty;
   char name[41];
};



void prnItems(const int sku[],const double price[],const int qty[], int num) {
   int i;
   double totalPrice = 0;
   printf( "SKU   Quantity  price\n"
           "-----+--------+---------\n" );
   for ( i = 0; i < num; i++ ) {
      printf( "%-5d|%7d |%9.2lf\n", sku[i], qty[i], price[i] );
      totalPrice += price[i] * qty[i];
   }
   printf("-----+--------+---------\n" 
          "        Total: %9.2lf", totalPrice);
}
void readItems( int sku[], double price[], int qty[], int num ) {
   int i;
   printf( "Enter %d Item information:\n", num );
   for ( i = 0; i < num; i++ ) {
      printf( "Enter Item number %d:\n", i + 1 );
      printf( "SKU\n> " );
      scanf( "%d", &sku[i] );
      printf( "Price\n> " );
      scanf( "%lf", &price[i] );
      printf( "Quantity\n> " );
      scanf( "%d", &qty[i] );
      printf( "--------------------------------\n" );
   }
}

void prnItem( struct Item A ) {
   printf( "%-40s|%-5d|%7d |%9.2lf\n",A.name, A.sku, A.qty, A.price );
}

struct Item readItem( void ) {
   struct Item toRead;
   printf( "Item name\n> " );
   // scanf( "%[^X]" , cstring); X is the character to stop at
   scanf( "%[^\n]", toRead.name );
   flushKey( );
   printf( "SKU\n> " );
   scanf( "%d", &toRead.sku);
   flushKey( );
   printf( "Price\n> " );
   scanf( "%lf", &toRead.price);
   flushKey( );
   printf( "Quantity\n> " );
   scanf( "%d", &toRead.qty );
   flushKey( );
   printf( "--------------------------------\n" );

   return toRead;
}

int main( void ) {
   struct Item I = { 11.11, 222, 300 };
   prnItem( I );
   I.price = 33.23;
   I.qty = 10;
   I.sku = 444;
   prnItem( I );
   I = readItem( );
   prnItem( I );
   return 0;
}
