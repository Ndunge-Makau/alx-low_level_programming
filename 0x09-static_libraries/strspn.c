#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: main string to be scanned
 * @accept: string containing list of characters to match in s
 * Return: Number of characters in the initial segment of s,
 * which consist only of characters in accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int i, j, n = 0, x = 0;

	while (s[x])
	{
		x++;
	}
	while (accept[n])
	{
		n++;
	}
	for (i = 0; i < x; i++)
	{
		for (j = 0; j <= n; j++)
		{
			if (accept[j] == s[i])
			{
				count++;
				break;
			}
			if (!accept[j])
			{
				i = x;
			}
		}
	}
	return (count);
}
