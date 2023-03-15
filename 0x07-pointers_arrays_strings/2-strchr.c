#include "main.h"

/**
 * _strchr - Searched for the first occurrence of character
 * @s: String to be scanned
 * @c: character to be searched
 * Return: Pointer to the first occurrence of c, else NULL
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (*s)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
		i++;
	}
	return (NULL);
}
