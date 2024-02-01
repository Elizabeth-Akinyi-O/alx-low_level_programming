#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: pointer to the hash table
 *
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *element, *temp;
	hash_table_t *head = ht;
	unsigned long int a;

	for (a = 0; a < ht->size; a++)
	{
		if (ht->array[a] != NULL)
		{
			element = ht->array[a];
			while (element != NULL)
			{
				temp = element->next;
				free(element->key);
				free(element->value);
				free(element);
				element = temp;
			}
		}
	}
	free(head->array);
	free(head);
}
