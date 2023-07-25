#include "main.h"

/**
 * myprintf - String printing
 * Rights reserved by Raniabenali and YoussefChati
 *
 * @format: string consists of 0 or more directives
 * Return: number of printed characters
 */
int _printf(const char *format, ...)
{
	int printed_chars;
	conver_t f_list[] = {
		{"c", charachterprnt},
		{"s", mystring},
		{"%", myprcnt},
		{"d", myint},
		{"i", myint},
		{"b", mybinary},
		{"r", function},
		{"R", myput},
		{"u", mysecint},
		{"o", myoctal},
		{"x", myprinthex},
		{"X", myhex},
		{NULL, NULL}
	};
	va_list arg_list;

	if (format == NULL)
		return (-1);

	va_start(arg_list, format);
	/*mytchecker function*/
	printed_chars = mytchecker(format, f_list, arg_list);
	va_end(arg_list);
	return (printed_chars);
}
