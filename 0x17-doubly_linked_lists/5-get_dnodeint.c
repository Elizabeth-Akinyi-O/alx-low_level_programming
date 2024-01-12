#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: pointer to head of the list
 * @index: index of the node, starting from 0
 *
 * Return: Nth node or NULL if the node does not exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int a; /* a is size */
	dlistint_t *temp;/* temp node pointing to head */

	a = 0;
	if (head == NULL)
		return (NULL);

	temp = head;
	while (temp)
	{
		if (index == a)
			return (temp);
		a++;
		temp = temp->next;
	}
	return (NULL);
}
