#include "hash_tables.h"

/**
 * shash_table_print_rev - prints a sorted hash table in reverse
 * @ht: pointer to the sorted hash table
 */

void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *curr_entry;

	if (ht == NULL)
		return;

	curr_entry = ht->stail;
	printf("{");
	while (curr_entry != NULL)
	{
		printf("'%s': '%s'", curr_entry->key, curr_entry->value);
		curr_entry = curr_entry->sprev;
		if (curr_entry != NULL)
			printf(", ");
	}
	printf("}\n");
}
