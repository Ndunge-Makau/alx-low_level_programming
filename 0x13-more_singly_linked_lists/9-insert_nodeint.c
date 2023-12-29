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
	listint_t *current, *temp;
	unsigned int i;

	if (head == NULL)
	{
		return (NULL);
	}
	else
	{
		temp = malloc(sizeof(listint_t));
		if (temp == NULL)
		{
			free(temp);
			return (NULL);
		}
		temp->n = n;
		current = *head;
		for (i = 0; i < idx && current; i++)
		{
			current = current->next;

		}
		temp->next = current->next;
		current->next = temp;
		return (temp);
	}
}
