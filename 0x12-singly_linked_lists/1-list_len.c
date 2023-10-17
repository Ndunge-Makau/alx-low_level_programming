#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list.
 * @h: pointer to first node of list
 * Return: Number of elements
 */

size_t list_len(const list_t *h)
{
	size_t num = 0;
	const list_t *temp = h;

	while (temp != NULL)
	{
		num++;
		temp = temp->next;
	}
	return (num);
}
