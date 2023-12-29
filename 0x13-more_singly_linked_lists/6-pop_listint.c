#include "lists.h"

/**
* pop_listint - Deletes the head node of a listint_t linked list
*		and returns the head node’s data (n).
* @head: list
* Return: Head node's data, otherwise 0 if empty
*/

int pop_listint(listint_t **head)
{
	int i;
	listint_t *temp, *current;

	if (head != NULL)
	{
		current = *head;
		i = current->n;
		temp = current->next;
		free(current);
		*head = temp;
		return (i);
	}
	return (0);
}
