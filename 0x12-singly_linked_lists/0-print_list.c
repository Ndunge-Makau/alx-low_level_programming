#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list.
 * @h: list
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t num = 0;
	const list_t *temp = h;

	while (temp != NULL)
	{
		if (temp->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", temp->len, temp->str);
		num++;
		temp = temp->next;
	}
	return (num);
}
