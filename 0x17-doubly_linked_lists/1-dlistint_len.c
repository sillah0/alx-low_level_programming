#include "lists.h"

/**
 * dlistint_len - function to check no of elements in a list
 * @h: pointer to head
 * Return: no of elements in a list
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
