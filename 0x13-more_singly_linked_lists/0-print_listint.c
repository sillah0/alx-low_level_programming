#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints all elements of a list
 * @h: head of list
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t node_count = 0;
	const listint_t *current = h;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		node_count++;
	}
	return (node_count);
}
