#include "hash_tables.h"

/**
 * hash_table_get -  retrieves a value associated with a key
 * @ht: pointer to the hash table
 * @key: key whose value is to be retrieved
 *
 * Return: the value associated with the element,
 * or NULL if key couldn’t be found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *key_value;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);

	key_value = ht->array[index];
	while (key_value && strcmp(key_value->key, key) != 0)
		key_value = key_value->next;

	return ((key_value == NULL) ? NULL : key_value->value);
}
