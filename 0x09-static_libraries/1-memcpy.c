#include "main.h"

/**
 * _memcpy - Copuies characters from memory area
 * @n: Number of bytes to be copies
 * @dest: Pointer to the destination array
 * @src: Pointer to the source
 * Return: Pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
