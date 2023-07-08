#include "main.h"

/**
 * _memset - fill a block of memory with a particular value
 * @s: - pointer to memory block to be filled
 * @b: - value to be set in memory block
 * @n: - no of bytes to be filled
 *
 * Return: changed array with new value for n bytes
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (i = 0; n > i; i++)

	{
		s[i] = b;
		n--;
	}
	return (s);
}
