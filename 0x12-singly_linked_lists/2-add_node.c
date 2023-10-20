#include <stdio.h>
#include "lists.h"

/**
 * add_node - a function to add a new node
 * @head: address of list
 * @str: string to be headed
 * Return: address of new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	if (head == NULL || str == NULL)
	{
		return (NULL);
	}

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);

	if (new_node->str == NULL)
	return (NULL);

	new_node->len = strlen(str);
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}


