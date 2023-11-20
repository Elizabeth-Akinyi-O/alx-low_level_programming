#include "lists.h"
/**
 *pop_listint - deletes the head node of a listint_t linked list
 *and returns the head node’s data (n)
 *@head: pointer to the head pointer
 *
 *Return: integer
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *temporary;

	if (head == NULL || *head == NULL)
		return (0);
	n = (*head)->n;
	temporary = *head;
	*head = (*head)->next;
	free(temporary);
	return (n);
}
