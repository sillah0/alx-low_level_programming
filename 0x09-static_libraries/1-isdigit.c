#include "main.h"

/**
 * _isdigit - cheks if a given char is a digit
 * @c: - input
 *
 * Return: 1 if its a digit, 0 if otherwise
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
