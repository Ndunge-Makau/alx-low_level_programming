#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table
 * @ht: Hash Table
 * Return: Nothing
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long i;
	hash_node_t *node, *next;

	if (ht == NULL)
		return;
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			node = ht->array[i];
			while (node)
			{
				next = node->next;
				free(node->key);
				free(node->value);
				free(node);
				node = next;
			}
		}
	}
	free(ht->array);
	free(ht);
}

