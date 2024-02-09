#include "hash_tables.h"

/**
 * shash_table_get - Retrieves a value associated
 * with a key in a sorted hash table
 * @ht: Pointer to the sorted hash table
 * @key: key whose value is to be retrieved
 *
 * Return: the value associated with the key in
 * ht or NULL if key couldn’t be found
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *key_val;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);

	key_val = ht->shead;
	while (key_val != NULL && strcmp(key_value->key, key) != 0)
		key_val = key_val->snext;

	return ((key_val == NULL) ? NULL : key_val->value);
}
