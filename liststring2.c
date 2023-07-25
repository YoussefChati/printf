#include "main.h"

/**
 * function - reverser function
 * Rights reserved by Raniabenali and YoussefChati
 *
 * @arg: arg passed for the function
 * Return: printing amount of characters
 */
int function(va_list arg)
{
	int len;
	char *str;
	char *ptr;

	str = va_arg(arg, char *);
	if (str == NULL)
		return (-1);
	ptr = reverses(str);
	if (ptr == NULL)
		return (-1);
	for (len = 0; ptr[len] != '\0'; len++)
		myputchar(ptr[len]);
	free(ptr);
	return (len);
}

/**
 * myput - Trasnform string
 * Rights reserved by Raniabenali and YoussefChati
 *
 * @list: convert string
 * Return: stringing converted
 */
int myput(va_list list)
{
	int i;
	int x;
	char *str;
	char s[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char u[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	str = va_arg(list, char *);
	if (str == NULL)
		return (-1);
	for (i = 0; str[i] != '\0'; i++)
	{
		for (x = 0; x <= 52; x++)
		{
			if (str[i] == s[x])
			{
				myputchar(u[x]);
				break;
			}
		}
		if (x == 53)
			myputchar(str[i]);
	}
	return (i);
}
