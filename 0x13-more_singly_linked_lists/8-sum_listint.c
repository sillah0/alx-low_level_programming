#include <stdio.h>
#include "lists.h"

/**
 * sum_listint - returns sum of all the data(n)
 * @head: pointer to head
 * Return: 0 if empty
 */

int sum_listint(listint_t *head)
{
	listint_t *temp;
	int sum = 0;

	temp = head;

	while (temp != NULL)
	{
		sum = sum + temp->n;
		temp = temp->next;
	}
	return (sum);
}
