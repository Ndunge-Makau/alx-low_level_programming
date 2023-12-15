#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of a list_t list.
 * @head: list
 * @str: string to be added
 * Return: Pointer to list
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *temp = *head;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	if (str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->str = strdup(str);
	new_node->len = _strlen(strdup(str));
	new_node->next = NULL;
	if (temp == NULL)
	{
		*head = new_node;
	}
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new_node;
	}
	return (*head);
}

/**
 * _strlen - returns length of string
 * @s: string
 * Return: length of string
 */

int _strlen(char *s)
{
	int count = 0, i = 0;

	while (s[i])
	{
		count++;
		i++;
	}
	return (count);
}
