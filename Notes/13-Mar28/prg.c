#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define END_OF_DATA ('\n')
int isValud( double d ) {
   return d > 1.0 && d < 999.99;
}
int readMyDouble(double* vptr) {
   char next;
   int success = 1;
   // this senario read a real number ended by dollar sign and nothing after with values between 1.0 and 999.99
   int ret = scanf( "%lf$%c", vptr, &next );
   if ( ret == EOF ) {
      // end of date medium
      success = 0;
   }else if ( ret != 2 ) {  // 2 is number of '%' in format specifier
      // bad record
      // flush medium
      success = 0;
   }
   else if (next != END_OF_DATA){
      // garbage after valid data
      // flush medium
      success = 0;
   }
   else if ( !isValid( *vptr ) ) {
      // the data is read, but it is invali
      success = 0;
   }
   else {
      // good to go
   }

   return success;
}
