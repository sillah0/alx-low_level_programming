#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * op_add - addition function
 * @a: integer
 * @b: integer
 *
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - substraction funcction
 * @a: integer
 * @b: integer
 *
 * Return: diffrence of a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplication function
 * @a: integer
 * @b: integer
 *
 * Return: product of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division function
 * @a: integer
 * @b: integer
 *
 * Return: division of a and b
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		return (100);
	}
	return (a / b);
}

/**
 * op_mod - modular function
 * @a: integer
 * @b: integer
 *
 * Return: modular of a and b
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		return (100);
	}
	return (a % b);
}
