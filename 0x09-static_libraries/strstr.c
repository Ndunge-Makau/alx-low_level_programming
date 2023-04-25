#include "main.h"
#include <stddef.h>

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
		char *begin = haystack;
		char *pattern = needle;

		while (*haystack && *pattern && *haystack == *pattern)
		{
			haystack++;
			pattern++;
		}
		if (!*pattern)
			return (begin);
		haystack = begin + 1;
	}
	return (NULL);
}
