#include "main.h"
/**
 * charachterprnt - Character write
 * Rights reserved by Raniabenali and YoussefChati
 *
 * @list: listing of arg
 * Return: return characters printed
 */
int charachterprnt(va_list list)
{
	myputchar(va_arg(list, int));
	return (1);
}


/**
 * mystring - String write
 * Rights reserved by Raniabenali and YoussefChati
 *
 * @list: listing of arg
 * Return: return characters printed
 */
int mystring(va_list list)
{
	int i;
	char *str;

	str = va_arg(list, char *);
	if (str == NULL)
		str = "(null)";
	for (i = 0; str[i] != '\0'; i++)
		myputchar(str[i]);
	return (i);
}

/**
 * myprcnt - Symbol
 * Rights reserved by Raniabenali and YoussefChati
 *
 * @list: listing of arg
 * Return: return characters printed
 */
int myprcnt(__attribute__((unused))va_list list)
{
	myputchar('%');
	return (1);
}

/**
 * myint - Integer write
 * Rights reserved by Raniabenali and YoussefChati
 *
 * @list: arg listing
 * Return: return characters printed
 */
int myint(va_list list)
{
	int num_length;

	num_length = printnumbers(list);
	return (num_length);
}

/**
 * mysecint - Unsigned int write
 * Rights reserved by Raniabenali and YoussefChati
 *
 * @list: listing of all the arg
 * Return: number of numbers
 */
int mysecint(va_list list)
{
	unsigned int num;

	num = va_arg(list, unsigned int);

	if (num == 0)
		return (print(num));

	if (num < 1)
		return (-1);
	return (print(num));
}
