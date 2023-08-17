#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - iterates through array
 * @array: array to work with
 * @size: size of array
 * @action: pointer to function needed
 *
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	 unsigned int index;

		if (array == NULL || action == NULL)
		return;

		for (index = 0; index < size; index++)

		{
			action(array[index]);
		}

}

