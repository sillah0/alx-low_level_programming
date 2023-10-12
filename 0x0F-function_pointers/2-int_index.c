#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * int_index - index array
 * @array: array to go through
 * @size: size of array
 * @cmp: function to compare
 * Return: integer
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]))
			return (index);
	}
	return (-1);
}
