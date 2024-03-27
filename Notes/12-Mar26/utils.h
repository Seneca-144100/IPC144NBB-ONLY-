/*  SENECA_FILENAME_H   */
#ifndef SENECA_UTILS_H
#define SENECA_UTILS_H


void strCpy( char des[], const char src[] );



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



