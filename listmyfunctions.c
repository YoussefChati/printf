#include "main.h"
#include <stdio.h>

/**
 * myrev - Converst string to series
 * Rights reserved by Raniabenali and YoussefChati
 *
 * @s: reverse
 * Return: characters pointers
 */
char *myrev(char *s)
{
	int len;
	int head;
	char tmp;
	char *dest;

	for (len = 0; s[len] != '\0'; len++)
	{}

	dest = malloc(sizeof(char) * len + 1);
	if (dest == NULL)
		return (NULL);

	library(dest, s, len);
	for (head = 0; head < len; head++, len--)
	{
		tmp = dest[len - 1];
		dest[len - 1] = dest[head];
		dest[head] = tmp;
	}
	return (dest);
}

/**
 * mywriting - Print character
 * Rights reserved by Raniabenali and YoussefChati
 *
 * @str: series to be analyzed
 * Return: analysis process
 */
void mywriting(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		myputchar(str[i]);
}

/**
 * mylen - Check lenght of a number
 * Rights reserved by Raniabenali and YoussefChati
 *
 * @base: calculated by it
 * @num: numbers for which length is being calculated
 * Return: integer representing length numbers
 */
unsigned int mylen(unsigned int num, int base)
{
	unsigned int i;

	for (i = 0; num > 0; i++)
	{
		num = num / base;
	}
	return (i);
}

/**
 * library - Take the memory area
 * Rights reserved by Raniabenali and YoussefChati
 *
 * @n: numbers of bytes for copy
 * @src: source to be copied
 * @dest: copy destination
 * Return: memorycopy() function returns pointer to dest.
 */
char *library(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
