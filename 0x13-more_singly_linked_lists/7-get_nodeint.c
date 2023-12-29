#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a listint_t linked list.
 * @head: list
 * @index: index of node
 * Return: Nth node, NULL if node doesn't exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	if (head != NULL)
	{
		for (i = 0; i < index && head; i++)
		{
			head = head->next;
		}
		return (head);
	}
	else
	{
		return (NULL);
	}
}
