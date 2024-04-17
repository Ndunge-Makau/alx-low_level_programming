#include "hash_tables.h"

/**
 * hash_table_get - Retrieves a value associated with a key.
 * @ht: Hash table
 * @key: Key to look for
 * Return: Pointer to value retrieved, or NULL
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long hash;
	hash_node_t *node;

	if (ht == NULL || key == NULL)
	{
		return (NULL);
	}

	hash = key_index((unsigned char *)key, ht->size);
	node = ht->array[hash];

	if (node == NULL)
	{
		free(node);
		return (NULL);
	}
	if (node->next == NULL)
	{
		return (node->value);
	}
	else
	{
		while (strcmp(node->key, key) != 0)
		{
			node = node->next;
		}
		return (node->value);
	}
	return (NULL);
}

