#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table.
 * @ht: Hash Table
 * Return: Nothing
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long i;
	int j, k;

	if (ht == NULL)
	{
		return;
	}
	printf("{");
	j = 1;
	k = 1;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] == NULL)
			continue;
		if (!j)
		{
			printf(", ");
		}
		if (ht->array[i]->next == NULL)
		{
			printf("\'%s\': \'%s\'", ht->array[i]->key, ht->array[i]->value);
		}
		else
		{
			while (ht->array[i] != NULL)
			{
				if (!k)
				{
					printf(", ");
				}
				printf("\'%s\': \'%s\'", ht->array[i]->key, ht->array[i]->value);
				ht->array[i] = ht->array[i]->next;
				k = 0;
			}
		}
		j = 0;
	}
	printf("}\n");
}

