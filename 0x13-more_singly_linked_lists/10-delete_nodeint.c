#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node
 *	at index of a listint_t linked list.
 * @head: address of list
 * @index: Index of node to delete
 * Return: 1 for success, -1 for failure
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *current = *head, *temp;

	if (current == NULL)
	{
		free(current);
		return (-1);
	}

	if (index == 0)
	{
		*head = (*head)->next;
		free(current);
	}
	else
	{
		for (i = 0; i < index - 1; i++)
		{
			if (current->next == NULL)
			{
				free(current);
				return (-1);
			}
			current = current->next;
		}
		temp = current->next; 
		current->next = temp->next;
		free(temp);
	}
	return (1);
}
