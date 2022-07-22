#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string to be scanned
 * @accept: String contsining the characters to match
 * Return: Pointer to character in s that mathces or Null if not found
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int count;
	char *reset = accept;
	int tag;

	while (*s)
	{
		while (*accept)
		{
			if (*s == *accept)
			{
				count++;
				tag = 1;
				break;
			}
			accept++;
		}
		s++;
		accept = reset;

		if (tag == 1)
		{
			return (s - 1);
		}
	}
	return (NULL);
}
