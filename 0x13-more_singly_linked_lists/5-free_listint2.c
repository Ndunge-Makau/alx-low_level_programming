#include "lists.h"

/**
 * free_listint2 - Frees a listint_t list.
 * @head: List reference
 * Return: Nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *temp, *current;
	
	if (head != NULL)
	{
		current = *head;
		while (current != NULL)
		{
			temp = current->next;
			free(current);
			current = temp;
		}
		*head = current;
	}
}
