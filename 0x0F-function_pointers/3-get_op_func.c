#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * get_op_func - checks the right function
 * @s: function
 *
 * Return: integer value
 */
int (*get_op_func(char *s))(int, int)
{
		op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
		};
		int i;

	while (ops[i].op != NULL)
	{
		if (*ops[i].op == *s && s[1] == '\0')
		{
			return (ops[i].f);
		}
		i++;
	}

	return (0);
}

