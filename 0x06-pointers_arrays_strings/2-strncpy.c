#include "main.h"

/**
 * *_strncpy - copies a string, but only n bytes are copied
 * @dest: pointer of the destination string
 * @src: string to be copied
 * @n: number of characters to be copied
 * Return: pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, src_length = 0;

	while (src[i++])
		src_length++;
	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	for (i = src_length; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
