#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "utils.h"
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

int main( void ) {
   int sku[500] = { 0 };
   double price[500] = { 0.0 };
   int qty[500] = { 0 };
   readItems( sku, price, qty, 2 );
   prnItems( sku, price, qty, 20 );
   return 0;
}
