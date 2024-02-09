#include "lists.h"

/**
 * print_dlistint - Prints all the elements of a dlistint_t list.
 * @h: List
 * Return: Number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *temp;
	size_t num = 0;

	temp = h;
	if (temp == NULL)
	{
		return (num);
	}
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		num++;
		temp = temp->next;
	}
	return (num);
}
