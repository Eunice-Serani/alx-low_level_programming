#include "hash_tables.h"

/**
 * hash_table_set - This adds or updates an element in a hash table
 * @ht: Pointing to the hash table
 * @key: Shows the key to add - cannot be an empty string
 * @value: The value associated with key
 *
 * Return: Upon failure - 0
 *         Otherwise - 1
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new;
	char *value_copy;
	unsigned long int index, b;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	value_copy = strdup(value);
	if (value_copy == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	for (b = index; ht->array[b]; b++)
	{
		if (strcmp(ht->array[b]->key, key) == 0)
		{
			free(ht->array[b]->value);
			ht->array[b]->value = value_copy;
			return (1);
		}
	}

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
	{
		free(value_copy);
		return (0);
	}
	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(new);
		return (0);
	}
	new->value = value_copy;
	new->next = ht->array[index];
	ht->array[index] = new;

	return (1);
}
