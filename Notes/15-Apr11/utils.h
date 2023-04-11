#ifndef SDDS_UTILS_H
#define SDDS_UTILS_H

int getInt(void);
void flushKey(void);
void fflushKey(FILE* file);
int yes(void);
char getSingleChar(void);
void strCpy(char des[], const char src[]);
void strCat(char des[], const char srs[]);
int strCmp(const char s1[], const char s2[]);

#endif // !SDDS_UTILS_H


