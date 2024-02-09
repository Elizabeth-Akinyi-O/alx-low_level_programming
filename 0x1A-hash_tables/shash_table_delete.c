#include "hash_tables.h"

/**
 * shash_table_delete - deletes a sorted hash table
 * @ht: pointer to the sorted hash table
 *
 */

void shash_table_delete(hash_table_t *ht)
{
	shash_node_t *ele, *temp;
	hash_table_t *head = ht;

	if (ht == NULL)
		return;

	ele = ht->shead;
	while (ele)
	{
		temp = ele->snext;
		free(ele->key);
		free(ele->value);
		free(ele);
		ele = temp;
	}
	free(head->array);
	free(head);
}
