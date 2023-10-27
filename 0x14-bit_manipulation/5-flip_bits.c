#include <stdio.h>
#include "main.h"

/**
 * flip_bits - function to flip bits
 * @n: pointer to unsigned int
 * @m: input int
 *
 * Return:number of bits needed to flip a bit
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result = n ^ m;
	unsigned int count = 0;

	while (xor_result > 0)
	{
		count += xor_result & 1;
		xor_result >>= 1;
	}
	return (count);
}
