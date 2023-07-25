#include "main.h"
#include <stdio.h>

/**
 * myrev - String reverses series
 * All rights reserved or owned by Imane47250 and Fatimazahralachkar
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

	memory(dest, s, len);
	for (head = 0; head < len; head++, len--)
	{
		tmp = dest[len - 1];
		dest[len - 1] = dest[head];
		dest[head] = tmp;
	}
	return (dest);
}

/**
 * mywriting - sends characters to be typed
 * All rights reserved or owned by Imane47250 and Fatimazahralachkar
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
 * mylen - count length an octal number
 * All rights reserved or owned by Imane47250 and Fatimazahralachkar
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
 * library - Copy the memory area
 * All rights reserved or owned by Imane47250 and Fatimazahralachkar
 *
 * @n: numbers of bytes for copy
 * @src: source to be copied
 * @dest: copy destination
 * Return: memorycopy() function returns pointer to dest.
 */
char library(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
