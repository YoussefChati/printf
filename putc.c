#include "main.h"

/**
 * myputchar - print character
 * Rights reserved by Raniabenali and YoussefChati
 *
 * @c: print character
 * Return: success 1
 */
int myputchar(char c)
{
	return (write(1, &c, 1));
}
