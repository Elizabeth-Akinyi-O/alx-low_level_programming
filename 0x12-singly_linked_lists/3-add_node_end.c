#include "lists.h"
/**
 **add_node_end - adds a new node at the end of a list_t list
 *@head: pointer to the head
 *@str: string to be inserted to the first position
 *
 *Return: pointer to the first nodes
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp;
	list_t *new_node;

	temp = *head;
	if (head == NULL)
		return (NULL);
	new_node = make_node(str);
	if (new_node == NULL)
		return (NULL);
	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = new_node;
	return (*head);
}
/**
 **make_node - creates a new node
 *@str: string to be inserted in the created node
 *
 *Return: pointer to memory
 */
list_t *make_node(const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->next = NULL;
	new_node->str = strdup(str);
	new_node->len = len(str);
	return (new_node);
}
/**
 *len - length of the string
 *@str: string
 *
 *Return: length
 */
int len(const char *str)
{
	int a;

	if (str == NULL)
		return (0);
	a = 0;
	while (str[a] != '\0')
	{
		a++;
	}
	return (a);
}
