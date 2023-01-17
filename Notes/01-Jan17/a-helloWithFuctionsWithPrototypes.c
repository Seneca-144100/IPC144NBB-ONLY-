#include <stdio.h>
// receives or returns, functions talking between themseleves

void greetings(void); // function introduction or in C: function prototype
void goodbye(void);

int main(void) {

   greetings();
   goodbye();
   return 0;
}

void greetings(void) {
   printf("\tHello IPC144NBB!!!!\n");
}
void goodbye(void) {
   printf("\tGoodbye everyone\n");
}
