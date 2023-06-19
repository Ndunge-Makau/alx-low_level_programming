#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: Number of arguments
 * @av: Arguments
 * Return: a pointer to a new string, or NULL if it fails.
 */

char *argstostr(int ac, char **av)
{
	char *new_string;
	int i, j, k = 0, string_length = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			string_length += 1;
			j++;
		}
		string_length++;
	}
	string_length++;
	new_string = malloc(sizeof(char) * string_length);

	if (new_string == NULL)
	{
		free(new_string);
		return (NULL);
	}


	for (i = 0; i < ac; i++)
	{
		for (j = 0; (av[i][j] != '\0'); j++)
		{
			new_string[k] = av[i][j];
			k++;
		}
		new_string[k] = '\n';
		k++;
	}
	return (new_string);
}
