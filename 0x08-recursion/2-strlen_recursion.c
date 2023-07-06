#include "main.h"

/**
 * _strlen_recursion - function that returns the length of a string
 * @s: input
 *
 * Return: nothing
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	{
		_strlen_recursion(s + 1);
		return (1);
	}
}
