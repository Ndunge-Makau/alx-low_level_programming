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

	new = malloc(sizeof(dlistint_t));
	if (new == NULL || *h == NULL)
	{
		free(new);
		return (NULL);
	}
	new->n = n;
	if (idx == 0)
		new = add_dnodeint(h, n);
	while (temp->next != NULL && idx != 1)
	{
		temp = temp->next;
		idx--;
	}
	if (temp->next == NULL)
	{
		temp->next = new;
		new->prev = temp;
	}
	else
	{
		temp2 = temp->next;
		temp->next = new;
		temp2->prev = new;
		new->next = temp2;
		new->prev = temp;
	}
	return (new);
}
