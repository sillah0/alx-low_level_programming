#include "main.h"

/**
 * print_numbers - prints numbers from 0 to 9
 * Return: numbers between 0 and 9
 */

void print_numbers(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
