#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: head of the list
 * @n: value of the element
 *
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node_end, *h;

	node_end = malloc(sizeof(dlistint_t));
	if (node_end == NULL)
		return (NULL);

	node_end->n = n;
	node_end->next = NULL;
	h = *head;

	if (h != NULL)
	{
		while (h->next != NULL)
			h = h->next;
		h->next = node_end;
	}
	else
	{
		*head = node_end;
	}

	node_end->prev = h;

	return (node_end);
}
