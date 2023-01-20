#include <stdio.h>
// receives or returns, functions talking between themseleves

void greetings(void) {
   printf("\tHello IPC144NBB!!!!\n");
}
void goodbye(void) {
   printf("\tGoodbye everyone\n");
}

int main(void) {

   greetings();
   goodbye();
   return 0;
}