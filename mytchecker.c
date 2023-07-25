#include "main.h"

/**
 * mytchecker - Strings
 * Rights reserved by Raniabenali and YoussefChati
 * @format: String all characters required
 * @f_list: Listing all functions posible
 * @arg_list: Listing containing all arg passed to program.
 * Return: total characters
 */
int mytchecker(const char *format, conver_t f_list[], va_list arg_list)
{
	int i, j, r_val, printed_chars;

printed_chars = 0;
for (i = 0; format[i] != '\0'; i++)/* Iterates through the main str*/
{
if (format[i] == '%') /*Checks for format specifiers*/
{
/*Iterates through struct to find the right func*/
for (j = 0; f_list[j].sym != NULL; j++)
{
if (format[i + 1] == f_list[j].sym[0])
{
r_val = f_list[j].f(arg_list);
if (r_val == -1)
return (-1);
printed_chars += r_val;
break;
}
}
if (f_list[j].sym == NULL && format[i + 1] != ' ')
{
if (format[i + 1] != '\0')
{
myputchar(format[i]);
myputchar(format[i + 1]);
printed_chars = printed_chars + 2;
}
else
return (-1);
}
i = i + 1; /*Updating i to skip format symbols*/
}
else
{
myputchar(format[i]); /*call the write function*/
printed_chars++;
}
}
return (printed_chars);
}
