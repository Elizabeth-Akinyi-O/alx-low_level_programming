#include "hash_tables.h"

/**
 * shash_table_set - Adds an element to a sorted hash table
 * @ht: Pointer to the sorted hash table
 * @key: Key to add - can't be an empty string
 * @value: Value associated with the key
 *
 * Return: 0 upon failare, 1 otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *element, *temp;
	char *copy;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	copy = strdup(value);
	if (copy == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	temp = ht->shead;
	while (temp)
	{
		if (strcmp(temp->key, key) == 0)
		{
			free(temp->value);
			temp->value = copy;
			return (1);
		}
		temp = temp->snext;
	}
	element = malloc(sizeof(shash_node_t));
	if (element == NULL)
	{
		free(copy);
		return (0);
	}
	element->key = strdup(key);
	if (element->key == NULL)
	{
		free(copy);
		free(element);
		return (0);
	}
	element->value = copy;
	element->next = ht->array[index];
	ht->array[index] = element;

	if (ht->shead == NULL)
	{
		element->sprev = NULL;
		element->snext = NULL;
		ht->shead = element;
		ht->stail = element;
	}
	else if (strcmp(ht->shead->key, key) > 0)
	{
		element->sprev = NULL;
		element->snext = ht->shead;
		ht->shead->sprev = element;
		ht->shead = element;
	}
	else
	{
		temp = ht->shead;
		while (temp->snext != NULL && strcmp(temp->snext->key, key) < 0)
			temp = temp->snext;
		element->sprev = temp;
		element->snext = temp->snext;
		if (temp->snext == NULL)
			ht->stail = element;
		else
			temp->snext->sprev = element;
		temp->snext = element;
	}
	return (1);
}
