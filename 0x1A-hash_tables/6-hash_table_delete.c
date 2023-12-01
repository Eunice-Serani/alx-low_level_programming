#include "hash_tables.h"

/**
 * hash_table_delete - This deletes a hash table
 * @ht: Pointing to the hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *head = ht;
	hash_node_t *node, *tmp;
	unsigned long int q;

	for (q = 0; q < ht->size; q++)
	{
		if (ht->array[q] != NULL)
		{
			node = ht->array[q];
			while (node != NULL)
			{
				tmp = node->next;
				free(node->key);
				free(node->value);
				free(node);
				node = tmp;
			}
		}
	}
	free(head->array);
	free(head);
}
