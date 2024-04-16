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
	LinkedList *list = NULL, *temp = NULL;
	unsigned long hash;

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (0);
	}
	new_node->key = strdup(key);
	new_node->value = strdup(value);

	hash = key_index((unsigned char *)(key), 1024);

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
			list->head = ht->array[hash];
			if (list == NULL)
			{
				list = malloc(sizeof(LinkedList));
				list->head = new_node;
				list->next = NULL;
				ht->array[hash] = new_node;
			}
			else
			{
				temp = list;
				temp->head = new_node;
				temp->next = list;
				list = temp;
				ht->array[hash] = new_node;
			}
			return (1);
		}

	}
}

