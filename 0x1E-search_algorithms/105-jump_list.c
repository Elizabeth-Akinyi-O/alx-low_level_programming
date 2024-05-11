#include "search_algos.h"

/**
* jump_list - searches for a value in a sorted list of integers
*              using the Jump search algorithm
* @list: pointer to the head of the list to search in
* @size: number of nodes in list
* @value: value to search for
*
* Description: You have to use the square root of the size of
*              the list as the next_node step.
*  - Compares a value in the array to the value being searched, and prints it.
*
* Return: pointer to the first curr_node where value is located.
*       - If value is not present in head or if head is NULL,
*         your function must return NULL
*/

listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t step, step_size;
	listint_t *node, *next_node;

	if (list == NULL || size == 0)
		return (NULL);

	step = 0;
	step_size = sqrt(size);
	for (node = next_node = list; next_node->index + 1 < size && next_node->n < value;)
	{
		node = next_node;
		for (step += step_size; next_node->index < step; next_node = next_node->next)
		{
			if (next_node->index + 1 == size)
				break;
		}
		printf("Value checked at index [%ld] = [%d]\n", next_node->index, next_node->n);
	}

	printf("Value found between indexes [%ld] and [%ld]\n",
			node->index, next_node->index);

	for (; node->index < next_node->index && node->n < value; node = node->next)
		printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);
	printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);

	return (node->n == value ? node : NULL);
}
