#include "main.h"

/**
 * factorial - function returns the factorial of a given number
 * @n: input
 *
 * Return: -1 error
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	{
		factorial(n + 1);
		return (1);
	}
}
