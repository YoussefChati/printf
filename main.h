#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

/**
* struct convert - struct defines structure for functions and icons
* All rights reserved or owned by Imane47250 and Fatimazahralachkar
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
int analyzer(const char *format, conver_t f_list[], va_list arg_list);
int _printf(const char *format, ...);
int charwriting(char);
int pchar(va_list);
int pstring(va_list);
int percent(va_list);
int integer(va_list);
int numprinting(va_list);
int binary(va_list);
int reversed(va_list arg);
int putrefy(va_list);
int _integer(va_list);
int octal(va_list list);
int print_hex(va_list list);
int heX(va_list list);

/*functions*/
unsigned int length(unsigned int, int);
char *reverses(char *);
void writingrule(char *str);
char *memory(char *dest, char *src, unsigned int n);
int pin(unsigned int);
#endif
