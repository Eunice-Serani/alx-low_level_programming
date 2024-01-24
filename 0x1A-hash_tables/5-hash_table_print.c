#include "hash_tables.h"

/**
 * hash_table_print - This prints the key/values of hash table in order
 * @ht: Shows the hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int k = 0;
	hash_node_t *node;
	char *comma = "";

	if (!ht || !ht->array)
		return;

	putchar('{');
	while (k < ht->size)
	{
		node = ((ht->array)[k]);
		while (node)
		{
			printf("%s'%s': '%s'", comma, node->key, node->value);
			comma = ", ";
			node = node->next;
		}
		k++;
	}
	puts("}");
}
