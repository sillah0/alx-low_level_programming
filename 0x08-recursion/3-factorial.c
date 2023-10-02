#include <stdio.h>

/**
 * factorial - function to get the factorial of a number
 * @n: integer
 * Return: if n less than 0 return -1,
 * if n is equal to 0 return 1
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
		if (n == 0)
		{
			return (1);
		}
		else
		{
			return (n * factorial(n - 1));
		}
}

