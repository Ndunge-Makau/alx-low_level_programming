#include "hash_tables.h"

/**
 * hash_table_set - Adds an element to the hash table.
 * @ht: Hash Table.
 * @key: Key.
 * @value: Value associated with key.
 * Return: 1 if successful, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node, *current_node;
	unsigned long hash;

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (0);
	}
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = NULL;
	hash = key_index((unsigned char *)key, ht->size);
	current_node = ht->array[hash];
	if (current_node == NULL)
	{
		ht->array[hash] = new_node;
		return (1);
	}
	else
	{
		if (strcmp(current_node->key, key) == 0)
		{
			strcpy(current_node->value, value);
			return (1);
		}
		else
		{
			handle_collision(ht, hash, new_node);
			return (1);
		}
	}
}

/**
 * handle_collision - Handle collisions in a hash table
 * @ht: Hash table
 * @hash: Index of node in array
 * @node: Node to be inserted
 * Return: Nothing
 */
void handle_collision(hash_table_t *ht, unsigned long hash, hash_node_t *node)
{
	hash_node_t *current_node;

	current_node = ht->array[hash];
	node->next = current_node;
	ht->array[hash] = node;
}

