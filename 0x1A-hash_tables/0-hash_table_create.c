#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table
 * @size: Size of array
 * Return: Pointer to hash table, otherwise NULL
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *my_hash;
	unsigned long i;

	my_hash = malloc(sizeof(hash_table_t));

	if (my_hash == NULL)
	{
		return (NULL);
	}
	my_hash->size = size;
	my_hash->array = malloc(sizeof(hash_node_t *) * size);

	if (my_hash->array == NULL)
	{
		free(my_hash->array);
		free(my_hash);
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		my_hash->array[i] = NULL;
	}

	return (my_hash);
}

