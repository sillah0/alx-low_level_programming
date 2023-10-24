#include <stdio.h>
#include "lists.h"

/**
 * free_listint2 - frees a list
 * @head: pointer to head of the list
 * Return:NULL
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
	*head = NULL;
}
