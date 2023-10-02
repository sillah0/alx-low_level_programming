#include <stdio.h>

/**
 * is_prime_recursive - function declaration
 * @n: integer
 * @divisor: divider
 * Return: 0 or 1
 */
int is_prime_recursive(int n, int divisor)
{
	if (divisor == 1)
	{
		return (1);
	}
	if (n % divisor == 0)
	{
		return (0);
	}
	return (is_prime_recursive(n, divisor - 1));
}
int is_prime_number(int n)

/*
 * is_prime_number - function to find prime numbers
 * @n: integer
 * @Description: function to print prime numbers
 * Return: 0
 */

{
	if (n <= 1)
	{
		return (0);
	}
	return (is_prime_recursive(n, n - 1));
}
