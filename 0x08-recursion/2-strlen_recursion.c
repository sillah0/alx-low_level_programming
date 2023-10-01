#include <stdio.h>

/**
 * _strlen_recursion -function to print length of a string
 *@s: string  to be measured length
 *Return: 1;
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
