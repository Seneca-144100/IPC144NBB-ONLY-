/*  SENECA_FILENAME_H   */
#ifndef SENECA_UTILS_H
#define SENECA_UTILS_H


char* strCpy( char des[], const char src[] );
void strnCpy( char des[], const char src[], int len );
void strnCpyNTerm( char des[], const char src[], int len );
int strCmp( const char left[], const char right[] );


int getInt( );
double getDbl( );

/// <summary>
/// Flushes the console
/// </summary>
/// <returns>number of characters flushed before the newline character</returns>
int flushKey( void );
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



