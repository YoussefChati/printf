#include "main.h"

/**
 * printnumbers - Print numbers
 * Rights reserved by Raniabenali and YoussefChati
 *
 * @args: listing of arg
 * Return: number of arg printing
 */
int printnumbers(va_list args)
{
	int n;
	int div;
	int len;
	unsigned int num;

	n  = va_arg(args, int);
	div = 1;
	len = 0;

	if (n < 0)
	{
		len += myputchar('-');
		num = n * -1;
	}
	else
		num = n;

	for (; num / div > 9; )
		div *= 10;

	for (; div != 0; )
	{
		len += myputchar('0' + num / div);
		num %= div;
		div /= 10;
	}

	return (len);
}
/**
 * print - Unisigned number
 * Rights reserved by Raniabenali and YoussefChati
 *
 * @n: an unsigned integer will be printing
 * Return: amount of numbers printing
 */
int print(unsigned int n)
{
	int div;
	int len;
	unsigned int num;

	div = 1;
	len = 0;

	num = n;

	for (; num / div > 9; )
		div *= 10;

	for (; div != 0; )
	{
		len += myputchar('0' + num / div);
		num %= div;
		div /= 10;
	}

	return (len);
}
