#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position.
 * @h: Start of list
 * @idx: Index of the list where the new node should be added
 * @n: Data for node to be created
 * Return: Address of new node, else NULL
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp, *temp2, *new;

	if (h == NULL)
	{
		return (NULL);
	}
	temp = *h;
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->next = NULL;
	new->prev = NULL;
	new->n = n;
	if (idx == 0)
	{
		new = add_dnodeint(h, n);
	}
	else
	{
		while (idx != 1)
		{
			temp = temp->next;
			idx--;
		}
		if (temp->next == NULL)
			new = add_dnodeint_end(h, n);
		else
		{
			temp2 = temp->next;
			temp->next = new;
			new->prev = temp;
			new->next = temp2;
			temp2->prev = new;
		}
	}
	return (new);
}
