#include <stdlib.h>
#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string s
 * Return: length of string
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s++)
		len++;

	return (len);
}

/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: number of arguments
 * @av: array of arguments
 * Return: pointer to a new string, or NULL if it fails
 */

char *argstostr(int ac, char **av)
{
	int i, j, k = 0, length = 0;
	char *new_string;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; j < _strlen(av[i]); j++)
		{
			length++;
		}
		length++;
	}
	length++;

	new_string = malloc(sizeof(char) * length);

	if (new_string == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; j < _strlen(av[i]); j++, k++)
		{
			new_string[k] = av[i][j];
		}
		new_string[k] = '\n';
		k++;
	}

	return (new_string);
}

