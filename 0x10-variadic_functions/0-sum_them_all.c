#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - a function that prints the sum of parameters
 * @n: constatnt int
 * Return: 0
 */

int sum_them_all(const unsigned int n, ...)
{

	va_list args;
	unsigned int i;
	int sum;

	if (n == 0)
	{
		return (0);
	}

	va_start(args, n);

	sum = 0;

		for ( i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}

	va_end(args);
	return (sum);
}

