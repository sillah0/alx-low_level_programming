#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - a function to allocates memory
 * @b: unsigned int
 * Return: a pointer to memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
