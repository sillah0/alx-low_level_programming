#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - integer index
 * @array: array to work with
 * @size: array size
 * @cmp: comparison function pointer
 *
 * Return: integer
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	if (array == NULL || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	return (-1);
}
