#include "lists.h"

/**
 * listint_len - Returns the number of elements in a linked listint_t list.
 * @h: List
 * Return: Number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;
	const listint_t *temp = h;

	while (temp != NULL)
	{
		temp = temp->next;
		count++;
	}
	return (count);
}
