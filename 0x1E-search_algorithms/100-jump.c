#include <math.h>
#include "search_algos.h"

/**
* jump_search - a function that searches for a value
* in a sorted array of integers using the Jump search algorithm
* @array: the pointer to the first element of the array to search in
* @size: the number of elements in array
* @value: the value to search for
*
* Return: the first index where value is located
*/

int jump_search(int *array, size_t size, int value)
{
	size_t m, low = 0, high = 0;

	if (!array)
		return (-1);
	m = (size_t)sqrt(size);
	while ((high < size) && (*(array + high) < value))
	{
		printf("Value checked array[%d] = [%d]\n", (int)high, *(array + high));
		low = high;
		high += m;
		if (low >= size)
			return (-1);
	}
	printf("Value found between indexes [%d] and [%d]\n", (int)low, (int)high);
	high = high >= size ? size - 1 : high;
	for (; (low <= high) && (*(array + low) <= value); low++)
	{
		printf("Value checked array[%d] = [%d]\n", (int)low, *(array + low));
		if (*(array + low) == value)
			return ((int)low);
	}
	return (-1);
}
