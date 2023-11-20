#include "lists.h"
/**
 *free_listint2 - frees a list and sets the head to NULL
 *@head: pointer to the head
 */
void free_listint2(listint_t **head)
{
	listint_t *temporary;

	if (head == NULL || *head == NULL)
		return;
	while ((*head)->next != NULL)
	{
		temporary = (*head)->next;
		free(*head);
		*head = temporary;
	}
	free(*head);
	*head = NULL;
}
