#include "lists.h"
/**
 *add_nodeint - adds a new node at the beginning of a list
 *@head: pointer to the head pointer
 *@n: new integer
 *
 *Return: pointer to the head pointer
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node_add;

	if (head == NULL)
		return (0);

	node_add = malloc(sizeof(listint_t));
	if (node_add == NULL)
		return (NULL);
	if (*head == NULL)
		node_add->next = NULL;
	else
		node_add->next = *head;
	node_add->n = n;
	*head = node_add;

	return (*head);
}
