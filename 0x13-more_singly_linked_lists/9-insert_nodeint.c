#include "lists.h"
/**
 *make_new_node - creaes a new node
 *@n: data of the node
 *
 *Return: pointer to the node
 */
listint_t *make_new_node(int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	return (new_node);
}
/**
 *insert_nodeint_at_index - inserts a new node at a given position
 *@head: pointer to the first element of the list
 *@idx:  index of the list where the new node should be added
 *@n: input data of the new node
 *
 *Return: pointer to the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int a;
	listint_t *temporary;
	listint_t *old_temp;
	listint_t *new_node;

	temporary = *head;
	if (head == NULL)
		return (NULL);
	new_node = make_new_node(n);
	if (new_node == NULL)
		return (NULL);
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	if (idx == 0)
		*head = new_node;
	for (a = 0; a < idx - 1 && temporary != NULL && idx != 0; a++)
		temporary = temporary->next;
	if (temporary == NULL)
		return (NULL);
	if (idx == 0)
		new_node->next = temporary;
	else
	{
		old_temp = temporary->next;
		temporary->next = new_node;
		new_node->next = old_temp;
	}
	return (new_node);
}
