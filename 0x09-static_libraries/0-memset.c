#include "main.h"

/**
 * *_memset - fills memory with a constant byte
 * @s: memory to be filled
 * @b: char to copy
 * @n: number of items tocopy b
 * Return: pointer to memory
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
