#ifndef SDDS_UTILS_H
#define SDDS_UTILS_H

int getInt(void);
int getIntMM(int min, int max, const char valueName[]);
void flushKey(void);
void fflushKey(FILE* file);
int yes(void);
char getSingleChar(void);
void strCpy(char des[], const char src[]);
void strCat(char des[], const char srs[]);


#endif // !SDDS_UTILS_H


