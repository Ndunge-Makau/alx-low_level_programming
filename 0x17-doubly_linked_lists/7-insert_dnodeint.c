
#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position.
 * @h: List's head pointer
 * @idx: Index of the list where the new node should be added.
 * @n: Data for new node
 * Return: Address for the new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = *h, *temp2, *new;
	unsigned int count = 0;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL || *h == NULL)
	{
		free(new);
		return (NULL);
	}
	new->n = n;
	if (idx == 0)
		new = add_dnodeint(h, n);
	while (temp)
	{
		count++;
		temp = temp->next;
	}
	if (count < idx - 1)
	{
		free(new);
		return (NULL);
	}
	else if (count == idx - 1)
	{
		new = add_dnodeint_end(h, n);
		return (new);
	}
	else
	{
		temp = *h;
		count = 0;
		while (count != idx - 1)
		{
			temp = temp->next;
			count++;
		}
		temp2 = temp->next;
		new->next = temp2;
		new->prev = temp;
		temp2->prev = new;
		temp->next = new;
	}
	return (new);
}
