#include "main.h"

/**
 * _strstr -  function finds the first occurrence of the substring needle,
 * in the string haystack.
 * @haystack: string to be scanned
 * @needle: string to be searched within the haystack string
 * Return: Pointer to first occurrence or NULL if nothing is found.
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		while (*haystack == *needle)
		{
			haystack++;
			needle++;
		}
		if (*needle == '\0')
		{
			return (haystack);
		}
		haystack = haystack + 1;
	}
	return (NULL);
}
