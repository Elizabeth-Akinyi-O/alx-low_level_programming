#include "hash_tables.h"

/**
 * shash_table_print - prints a hash table
 * @ht: pointer to the sorted hash table
 */

void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *curr_entry;

	if (ht == NULL)
		return;

	curr_entry = ht->shead;
	printf("{");
	while (curr_entry != NULL)
	{
		printf("'%s': '%s'", curr_entry->key, curr_entry->value);
		curr_entry = curr_entry->snext;
		if (curr_entry != NULL)
			printf(", ");
	}
	printf("}\n");
}
