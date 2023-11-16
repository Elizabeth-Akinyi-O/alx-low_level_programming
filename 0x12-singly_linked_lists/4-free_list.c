#include "lists.h"
/**
 *free_list - frees a list
 *@head: pointer to the head
 */
void free_list(list_t *head)
{
	list_t *temporary;

	if (head == NULL)
		return;
	while (head->next != NULL)
	{
		temporary = head->next;
		free(head->str);
		free(head);
		head = temporary;
	}
	free(head->str);
	free(head);
}
