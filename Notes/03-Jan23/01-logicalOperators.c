/*logical operators always return 1 or 0
==
!=
>
<
>=
<=
!
*/
void name( void );
int main( void ) {
   int x,y;
   int b = 10;
   int c = 20;
   name( );
   printf( "having b as %d and c as %d\n", b, b );
   x = b > c;
   printf( "b > c is %d\n", x );
   x = c > b;
   printf( "c > b is %d\n", x );
   x = c == b;
   printf( "c == b is %d\n", x );
   x = c != b;
   printf( "c != b is %d\n", x );
   // anything but zero is true
   x = !c;
   printf( "!c is %d\n", x );

   c = !x;
   printf( "x being zero!\n" );
   printf( "!x is %d\n", c );

   return 0;
}
