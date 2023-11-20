#include "lists.h"
/**
 *delete_nodeint_at_index - deletes the node at index index of a list
 *@head: pointer to the head pointer
 *@index: index of the node that should be deleted
 *
 *Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int a;
	listint_t *temporary;
	listint_t *node;

	temporary = *head;
	if (head == NULL || *head == NULL)
		return (-1);
	for (a = 0; a < index - 1 && temporary != NULL && index != 0; a++)
		temporary = temporary->next;
	if (temporary == NULL)
		return (-1);
	if (index == 0)
	{
		node = temporary->next;
		free(temporary);
		*head = node;
	}
	else
	{
		if (temporary->next == NULL)
			node = temporary->next;
		else
			node = temporary->next->next;
		free(temporary->next);
		temporary->next = node;
	}
	return (1);
}
