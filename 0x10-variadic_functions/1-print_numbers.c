#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - a function to print numbers
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 *
 * Return: If separator is NULL, don’t print it
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));

	if (i < n - 1 && separator != NULL)
	{
		printf("%s", separator);
	}
	}

	va_end(args);
	printf("\n");
}
