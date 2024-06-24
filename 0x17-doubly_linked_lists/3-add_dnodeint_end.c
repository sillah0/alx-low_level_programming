#include "lists.h"

/**
 * add_dnodeint_end - adds a new node
 * @head: head of the list
 * @n: value of the element
 * Return: the address of the new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
    dlistint_t *new_node = malloc(sizeof(dlistint_t));
    dlistint_t *last = *head;

    if (!new_node)
        return (NULL);

    new_node->n = n;
    new_node->next = NULL;

    if (!*head)
    {
        new_node->prev = NULL;
        *head = new_node;
        return (new_node);
    }

    while (last->next)
        last = last->next;

    last->next = new_node;
    new_node->prev = last;

    return (new_node);
}
