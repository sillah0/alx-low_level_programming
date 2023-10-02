#include <stdio.h>

/**
 * _pow_recursion - function to print power of a given integer
 * @x: base integer
 * @y: exponent integer
 * Return: if y is less than 0 return -1
 */


int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else
		if (y == 0)
		{
			return (1);
		}
		else
		{
			return (x * _pow_recursion(x, y - 1));
		}
}
