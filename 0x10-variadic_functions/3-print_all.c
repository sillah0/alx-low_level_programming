#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - a function to print all parameters passed
 * @format: arguments passed to the function
 * c: char
 * i: integer
 * f: float
 * s: char * if string is NULL print nil
 *
 * Return: nothing
 */

void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int j = 0;
	char c;
	int i;
	float f;
	char *s;

	va_start(args, format);

	while (format[j] != '\0')
	{
		switch (format[j])
		{
			case 'c':
				c = va_arg(args, int), printf("%c", c);
				break;
			case'i':
				i = va_arg(args, int), printf("%d", i);
				break;
			case 'f':
				f = va_arg(args, double), printf("%f", f);
				break;
			case 's':
				s = va_arg(args, char *), printf("%s", s != NULL ? s : "(nil)");
				break;
			default:
			j++;
			continue;
		}
	if (format[j + 1] != '\0')
	{
		char *sep = ", ";
		printf("%s", sep);
	}

	j++;

va_end(args);
printf("\n");
	}
}
