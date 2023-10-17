#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: list
 * @str: string to be added
 * Return: address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);
	new_node->string = strdup(str);
	new_node->len = _strlen(strdup(str));
	new_node->next = *head;
	*head = new_node;
	return (new_node);
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
