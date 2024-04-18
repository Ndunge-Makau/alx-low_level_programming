#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table.
 * @ht: Hash Table
 * Return: Nothing
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long i;
	int j;

	if (ht == NULL)
	{
		return;
	}
	printf("{");
	j = 1;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] == NULL)
			continue;
		if (!j)
		{
			printf(", ");
		}
		while (ht->array[i] != NULL)
		{
			printf("\'%s\': \'%s\'", ht->array[i]->key, ht->array[i]->value);
			ht->array[i] = ht->array[i]->next;
		}
		j = 0;
	}
	printf("}\n");
}

