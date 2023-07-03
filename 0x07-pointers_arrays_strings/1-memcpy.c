#include "main.h"

/**
 * _memcpy - a function that copies memory area
 * @dest - memory area where bytes are to be stored
 * @src - memory area where bytes are to be copied
 * @n - number of bytes
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int j = 0;
	int i = n;

	for (j = 0; j < i; j++)
	{
		dest[j] = src[j];
		n--;
	}
	return (dest);
}
