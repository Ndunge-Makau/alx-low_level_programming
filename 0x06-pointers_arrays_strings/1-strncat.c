#include "main.h"

/**
 * *_strncat - concatenates two strings, but only n bytes
 * @dest: pointer to string where other string is to be appended
 * @src: string to be appended
 * @n: numger of bytes to be appended
 * Return: pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, dest_length = 0;

	while (dest[i++])
		dest_length++;
	for (i = 0; src[i] && i < n; i++)
	{
		dest[dest_length++] = src[i];
	}
	return (dest);
}
