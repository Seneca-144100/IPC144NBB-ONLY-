#include <stdio.h>

void start(const char* action) {
   printf(">>>> %s...\n", action);
}
int loadItems(const char filename[]) {
   start("Loading Items");
   return 1;
}
void saveItems(const char filename[]) {
   start("Saving Items");
}

void inventory(void) {
   start("Inventory");
}

void addItem(void) {
   start("Adding Item");
}
void removeItem(void) {
   start("Remove Item");
}
void stockItem(void) {
   start("Stock Items");
}
void POS(void) {
   start("Point Of Sale");
}
