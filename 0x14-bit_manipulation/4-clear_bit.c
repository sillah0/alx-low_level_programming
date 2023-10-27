#include <stdio.h>
#include "main.h"

/**
 * clear_bit - a function that sets the value of a bit to 0
 * @n: pointer to unsigned long int
 * @index: represents position of bit to be cleared
 *
 * Return:1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	*n &= ~(1UL << index);
	return (1);
}
