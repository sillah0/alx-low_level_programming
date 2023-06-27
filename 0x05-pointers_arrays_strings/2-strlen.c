#include "main.h"

/**
 * _strlen - prints the length of a string
 *
 * @s: string to get length of
 * Return: length of string
 */

int _strlen(char *s)
{
	int longi = 0;

	while (*s != '\0')
	{
		longi++;
		s++;
	}
	return (longi);
}
