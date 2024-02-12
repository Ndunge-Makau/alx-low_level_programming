#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node of a dlistint_t linked list.
 * @head: Start of list
 * @index: Index of node
 * Return: Nth node, else NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int i;

	if (head == NULL)
	{
		return (NULL);
	}
	temp = head;
	for (i = 0; i < index; i++)
	{
		temp = temp->next;
	}
	return (temp);
}

