#include <stdlib.h>
#include "main.h"

/**
 * _memset - fills memory with a constant byte.
 * @s: pointer to string
 * @b: character to fill memory with
 * @n: number of bytes to be filled
 * Return: pointer to the memory set
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}

/**
 * _calloc - allocates memory for an array, using malloc.
 * @nmemb: number of elements in the array
 * @size: size of elements
 * Return: pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(sizeof(int) * nmemb * size);

	if (ptr == NULL)
		return (NULL);
	_memset(ptr, 0, size);
	return (ptr);
}
