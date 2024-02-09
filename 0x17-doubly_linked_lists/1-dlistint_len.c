#include "lists.h"

/**
 * dlistint_len - Returns the number of elements in a linked dlistint_t list.
 * @h: Pointer to head
 * Return: Number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp = h;
	size_t num = 0;

	if (temp == NULL)
	{
		return (num);
	}
	while (temp)
	{
		num++;
		temp = temp->next;
	}
	return (num);
}
