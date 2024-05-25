#include "search_algos.h"

/**
* int binary_search - a function that searches for a value 
* in a sorted array of integers using the Binary search algorithm:
*@array: pointer to the first element of the array to search in
*@size: number of elements in array
*@value: value to search for
*
* Return: SUCCESS
*/

int binary_search(int *array, size_t size, int value)
{
	int high = size - 1;
	int low = 0;
	int mid, i;

	if (array == NULL)
		return (-1);

	while (low <= high)
	{
		mid = low + (high - low) / 2; /*Prevent overflow*/
		printf("Searching in array: ");
		for (i = low; i <= high; i++)
		{
			if (i == high)
				printf("%d", array[i]);
			else
				printf("%d, ", array[i]);
		}
		printf("\n");
		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;
	}
	return (-1);
}
