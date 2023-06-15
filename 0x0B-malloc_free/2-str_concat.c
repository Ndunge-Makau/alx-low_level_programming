#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 * @s1: First string
 * @s2: Second string
 * Return: Pointer to new string, else NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, length1 = 0, length2 = 0;
	char *new_string;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i])
	{
		length1++;
		i++;
	}

	while (s2[j])
	{
		length2++;
		j++;
	}

	new_string = malloc(sizeof(char) * (length1 + length2 + 1));

	if (new_string == NULL)
		return (NULL);

	for (i = 0; i < length1; i++)
	{
		new_string[i] = s1[i];
	}

	for (j = 0; j < length2; j++)
	{
		new_string[j + length1] = s2[j];
	}

	new_string[length1 + length2] = '\0';

	return (new_string);
}
