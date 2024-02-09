#include "hash_tables.h"

shash_table_t *shash_table_create(unsigned long int size);
int shash_table_set(shash_table_t *ht, const char *key, const char *value);
char *shash_table_get(const shash_table_t *ht, const char *key);
void shash_table_print(const shash_table_t *ht);
void shash_table_print_rev(const shash_table_t *ht);
void shash_table_delete(shash_table_t *ht);

/**
 * shash_table_create - Creates a sorted hash table
 * @size: Size of the new sorted hash table
 *
 * Return: Pointer to the newly created hash table
 *         NULL - if something went wrong
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ht;
	unsigned long int a;

	ht = malloc(sizeof(shash_table_t));
	if (ht == NULL)
		return (NULL);

	ht->size = size;
	ht->array = malloc(sizeof(shash_node_t *) * size);
	if (ht->array == NULL)
		return (NULL);
	for (a = 0; a < size; a++)
		ht->array[a] = NULL;
	ht->shead = NULL;
	ht->stail = NULL;

	return (ht);
}

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
