#include "lists.h"
/**
 *free_listt2 - frees a linked list
 *@head: head of a list
 */
void free_listt2(listt_t **head)
{
	listt_t *temporary;
	listt_t *current;

	if (head != NULL)
	{
		current = *head;
		while ((temporary = current) != NULL)
		{
			current = current->next;
			free(temporary);
		}
		*head = NULL;
	}
}
/**
 *free_listint_safe - frees a linked list
 *@h: head of the list
 *
 *Return: freed list size
 */
size_t free_listint_safe(listint_t **h)
{
	size_t node = 0;/*node is number of nodes*/
	listt_t *ptr, *new, *add; /*new-new node && ptr-head pointer*/
	listint_t *curr;

	ptr = NULL;
	while (*h != NULL)
	{
		new = malloc(sizeof(listt_t));

		if (new == NULL)
			exit(98);
		new->p = (void *)*h;
		new->next = ptr;
		ptr = new;

		add = ptr;

		while (add->next != NULL)
		{
			add = add->next;
			if (*h == add->p)
			{
				*h = NULL;
				free_listt2(&ptr);
				return (node);
			}
		}
		curr = *h;
		*h = (*h)->next;
		free(curr);
		node++;
	}
	*h = NULL;
	free_listt2(&ptr);
	return (node);
}

