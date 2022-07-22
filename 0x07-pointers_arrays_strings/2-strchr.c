#include "main.h"
#include <stddef.h>
/**
 * _strchr - Searched for the first occurrence of character
 * @s: String to be scanned
 * @c: character to be searched
 * Return: Pointer to the first occurrence of c, else NULL
 */

char *_strchr(char *s, char c)
{

	while (*s)
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
