#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

/**
* struct convert - struct defines structure for functions and icons
* Rights reserved by Raniabenali and YoussefChati
*
* @f: associated function
* @sym: operator
*/
struct convert
{
	char *sym;
	int (*f)(va_list);
};
typedef struct convert conver_t;

/*basic_variables*/
int mytchecker(const char *format, conver_t f_list[], va_list arg_list);
int _printf(const char *format, ...);
int myputchar(char);
int charachterprnt(va_list);
int mystring(va_list);
int myprcnt(va_list);
int myint(va_list);
int printnumbers(va_list);
int mybinary(va_list);
int function(va_list arg);
int myput(va_list);
int mysecint(va_list);
int myoctal(va_list list);
int myprinthex(va_list list);
int myhex(va_list list);

/*functions*/
unsigned int mylen(unsigned int, int);
char *myrev(char *);
void mywriting(char *str);
char *library(char *dest, char *src, unsigned int n);
int print(unsigned int);
#endif
