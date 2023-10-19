#include "lists.h"
#include <unistd.h>

/**
 * print_list - prints all the elements of a list_t list.
 * @h: list
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t num = 0, length = 0;
	int i = 0;
	const list_t *temp = h;
	char *my_string;

	while (temp != NULL)
	{
		if (temp->str == NULL)
		{
			length = 0;
			my_string = "(nil)";
		}
		else
		{
			length = temp->len;
			my_string = temp->str;
		}
		_putchar('[');
		_putchar('0' + length);
		_putchar(']');
		_putchar(' ');
		while (my_string[i])
		{
			_putchar(my_string[i]);
			i++;
		}
		i = 0;
		_putchar('\n');
		num++;
		temp = temp->next;
	}
	return (num);
}

/**
 * _putchar - print character
 * @c: character
 * Return: 1 on success, -1 on error
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
