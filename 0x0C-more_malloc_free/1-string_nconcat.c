#include "main.h"
#include <stdlib.h>

/**
 * _strlen - finds the length of a string
 * @s: string
 * Return: length of string
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s++)
		length++;

	return (length);
}
/**
 * string_nconcat - concatenates two strings.
 * @s1: First string.
 * @s2: Second string
 * @n: Number of characters of s2 to be included in the new string
 * Return: pointer shall point to a newly allocated space in memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new_string;
	unsigned int i, j, length_1 = 0, length_2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	length_1 = _strlen(s1);
	length_2 = _strlen(s2);

	if (n >= length_2)
		n = length_2;

	new_string = malloc(sizeof(char) * (length_1 + n + 1));

	if (new_string == NULL)
		return (NULL);

	for (i = 0; i < length_1; i++)
	{
		new_string[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{
		new_string[j + length_1] = s2[j];
	}
	return (new_string);
}
