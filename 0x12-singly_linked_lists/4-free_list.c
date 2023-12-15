#include "lists.h"

/**
 * free_list - Frees a list_t list
 * @head: adress of list
 * Return: Nothing
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
