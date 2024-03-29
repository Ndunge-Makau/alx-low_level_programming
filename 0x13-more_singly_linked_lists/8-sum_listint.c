#include "lists.h"

/**
 * sum_listint - Returns the sum of all the data (n)
 *	of a listint_t linked list.
 * @head: List
 * Return: Sum
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
