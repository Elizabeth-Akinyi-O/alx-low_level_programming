#include "hash_tables.h"
/**
 * hash_table_create - creates a hash table
 * @size: Size of the array
 *
 * Return: pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *h_t;
	unsigned long int a;

	h_t = malloc(sizeof(hash_table_t));
	if (h_t == NULL)
		return (NULL);

	h_t->size = size;
	h_t->array = malloc(sizeof(hash_node_t *) * size);
	if (h_t->array == NULL)
		return (NULL);
	for (a = 0; a < size; a++)
		h_t->array[a] = NULL;

	return (h_t);
}
