#include <stdio.h>
#include "main.h"

/**
 * get_bit - function to get value of a bit at a given index
 * @n: unsigned long int of bit to be checked
 * @index: parameter representing position of bit
 * to be checked
 *
 * Return: the value of the bit at index index
 *  or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
	{
		return (-1);
	}
	else
		return ((n >> index) & 1);
}

