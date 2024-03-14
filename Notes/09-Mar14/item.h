#ifndef SENECA_ITEM_H
#define SENECA_ITEM_H

#define MAX_NO_OF_PRODUCTS 100
#define MAX_NAME_LENGTH 30
struct Item {
   double price;
   int sku;
   int qty;
   char name[MAX_NAME_LENGTH + 1];
};
void prnItems( const struct Item array[], int num );
void readItems( struct Item array[], int num );
void prnItem( struct Item A );
struct Item readItem( void );

#endif // !SENECA_ITEM_H

