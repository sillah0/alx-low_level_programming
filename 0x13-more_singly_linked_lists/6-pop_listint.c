#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - deletes head of a list
 * @head: head of the list
 * Return:integer
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (!head || !(*head))
		return (0);
	temp = *head;
	n = (*head)->n;
	if (temp->next)
		*head = temp->next;
	else
		*head = NULL;
	free(temp);
	return (n);
}

