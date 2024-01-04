#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given position.
 * @head: List
 * @idx: index
 * @n: node data
 * Return: Address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current, *new;
	unsigned int i;

	if (head == NULL)
	{
		return (NULL);
	}
	else
	{
		new = malloc(sizeof(listint_t));
		if (new == NULL)
		{
			free(new);
			return (NULL);
		}
		new->n = n;
		current = *head;
		if (idx == 0)
		{
			new->next = *head;
		}
		else
		{
			for (i = 0; i < idx - 1 && current; i++)
			{
				current = current->next;

			}
			new->next = current->next;
			current->next = new;
		}
		return (new);
	}
}
