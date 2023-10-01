#include <stdio.h>
/**
 * _puts_recursion - a function to print a string
 * @*s; string to be printed
 * Return: nothing
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\n');
		return;
	}
	putchar(*s);
	_puts_recursion(s + 1);
}
