#include <math.h>
#include "search_algos.h"


/**
* interpolation_search - a function that searches for a value
* in a sorted array of integers using the Interpolation search algorithm
* @array: the pointer to the first element of the array to search in
* @size: the number of elements in array
* @value: the value to search for
*
* Return: the first index where value is located
*/

int interpolation_search(int *array, size_t size, int value)
{
    size_t high = size - 1;
	size_t low = 0;
    double fraction;
	size_t pos = 0;
	

	if (!array)
		return (-1);
	while (array[high] != array[low])
	{
		fraction = (double)(high - low) / (array[high] - array[low]);
		pos = low + (fraction * (value - array[low]));
		if (pos >= size)
		{
			printf("Value checked array[%d] is out of range\n", (int)pos);
			break;
		}
		printf("Value checked array[%d] = [%d]\n", (int)pos, array[pos]);
		if (array[pos] == value)
			return (pos);
		else if (array[pos] < value)
			low = pos + 1;
		else
			high = pos - 1;
	}
	return (value == array[low] ? (int)low : -1);
}
