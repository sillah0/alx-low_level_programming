#include "search_algos.h"
/**
 * linear search - searches for a value in an arraty of integers
 * using linear search algorithm
 *
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Return: always exit success
 */

int linear_search(int *array, size_t size, int value)
{
	int i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < (int)size; i++)
	{
		printf("value checked array [%u] = [%d]\n", i, array[i]);
		if (value == array[i])
			return (i);
	}
	return (-1);
}
