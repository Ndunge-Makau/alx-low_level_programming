#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table
 * @ht: Hash Table
 * Return: Nothing
 */

void hash_table_print(const hash_table_t *ht)
{
	int comma_flag = 1;
	unsigned long i;
	hash_node_t *node;

	if (ht == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		if (node == NULL)
			continue;
		if (!comma_flag)
			printf(", ");
		while (node)
		{
			if (!comma_flag)
			{
				printf(", ");
			}
			printf("'%s': '%s'", node->key, node->value);
			node = node->next;
		}
		node = NULL;
	}
	printf("}\n");
}

