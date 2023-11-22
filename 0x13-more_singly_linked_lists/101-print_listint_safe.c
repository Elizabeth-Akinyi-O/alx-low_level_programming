#include "lists.h"
/**
 *free_listt - frees a list
 *@head: pointer
 */
void free_listt(listt_t **head)
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
 *print_listint_safe - prints a linked list
 *@head: pointer to the list
 *
 *Return: node count
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t node = 0;
	listt_t *ptr, *new, *add; /*new is new node*/

	ptr = NULL;
	while (head != NULL)
	{
		new = malloc(sizeof(listt_t));

		if (new == NULL)
			exit(98);

		new->p = (void *)head;
		new->next = ptr;
		ptr = new;
		add = ptr;
		while (add->next != NULL)
		{
			add = add->next;
			if (head == add->p)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_listt(&ptr);
				return (node);
			}

		}
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		node++;
	}
	free_listt(&ptr);
	return (node);
}
