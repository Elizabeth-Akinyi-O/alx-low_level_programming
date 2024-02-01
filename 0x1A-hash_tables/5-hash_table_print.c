#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: pointer to the hash table
 *
 * Description: print the key/value in the order
 * that they appear in the array of hash table
 * Order: array, list
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *current_entry;
	unsigned long int a;
	unsigned char print_comma = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (a = 0; a < ht->size; a++)
	{
		if (ht->array[a] != NULL)
		{
			if (print_comma == 1)
				printf(", ");

			current_entry = ht->array[a];
			while (current_entry != NULL)
			{
				printf("'%s': '%s'", current_entry->key, current_entry->value);
				current_entry = current_entry->next;
				if (current_entry != NULL)
					printf(", ");
			}
			print_comma = 1;
		}
	}
	printf("}\n");
}
