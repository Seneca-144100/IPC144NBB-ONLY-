/*  SENECA_FILENAME_H   */
#ifndef SENECA_UTILS_H
#define SENECA_UTILS_H


void strCpy( char des[], const char src[] );

/// <summary>
/// left &lt; right returns negative value
/// left == right returns 0
/// left &gt; right returns positive value
/// </summary>
/// <param name="left"> string to compare</param>
/// <param name="right"> string to compare</param>
/// <returns> see summery </returns>
int strCmp( const char left[], const char right[] );


int getInt( );
double getDbl( );
void flushKey( void );
/// <summary>
/// Reads a Cstring from console up to newline character and then flushes the keyboard buffer
/// </summary>
/// <param name="str">to read</param>
void getLine( char str[] );
/// <summary>
/// prints a new line character on console
/// </summary>
/// <param name="">nothing</param>
void nl( void );

#endif // !SENECA_UTILS_H



