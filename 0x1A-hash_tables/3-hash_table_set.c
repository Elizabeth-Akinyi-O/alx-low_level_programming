#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: pointer to the hash table
 * @key: is the key. key can not be an empty string
 * @value: value associated with the key.
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *element;
	char *copy; /* value copy */
	unsigned long int index, a;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	copy = strdup(value);
	if (copy == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	for (a = index; ht->array[a]; a++)
	{
		if (strcmp(ht->array[a]->key, key) == 0)
		{
			free(ht->array[a]->value);
			ht->array[a]->value = copy;
			return (1);
		}
	}
	element = malloc(sizeof(hash_node_t));
	if (element == NULL)
	{
		free(copy);
		return (0);
	}
	element->key = strdup(key);
	if (element->key == NULL)
	{
		free(element);
		return (0);
	}
	element->value = copy;
	element->next = ht->array[index];
	ht->array[index] = element;

	return (1);
}
