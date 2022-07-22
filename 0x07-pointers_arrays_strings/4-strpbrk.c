#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string to be scanned
 * @accept: String contsining the characters to match
 * Return: Pointer to character in s that mathces or Null if not found
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j, n = 0, x = 0;

	while (s[n])
		n++;
	while (accept[x])
		x++;
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= x; j++)
		{
			if (s[i] == accept[j])
				return (s + i);
		}
	}
	s = 0;
	return (s);
}
