#include "lists.h"
/**
 *reverse_listint - reverses a singly linked list
 *@head: pointer to the head
 *
 *Return: pointer to the first element
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *temporary;
	listint_t *temp2;

	if (head == NULL)
		return (NULL);
	temporary = *head;
	*head = temporary->next;
	temporary->next = NULL;

	while (*head != NULL)
	{
		temp2 = (*head)->next;
		(*head)->next = temporary;
		temporary = *head;
		if (temp2 == NULL)
			return (*head);
		*head = temp2;
	}
	if (*head == NULL)
	{
		*head = temporary;
		return (*head);
	}
	return (NULL);
}
