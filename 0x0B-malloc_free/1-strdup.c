#include "main.h"
#include <stdlib.h>

/**
 * _strdup -  returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: string to be copied
 * Return: Pointer to new string, NULL if str = NULL
 */

char *_strdup(char *str)
{
	int count = 0, i = 0;
	char *new_string;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[i])
	{
		count++;
		i++;
	}

	new_string = malloc(sizeof(char) * count + 1);

	if (new_string == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] ; i++)
	{
		new_string[i] = str[i];
	}
	new_string[count] = '\0';
	return (new_string);
}
