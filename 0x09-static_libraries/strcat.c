#include "main.h"

/**
 * *_strcat - concatenates two strings
 * @dest: pointer to destination of appended string
 * @src: string to be appended
 * Return: pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int dest_length = 0;

	while (dest[i++])
		dest_length++;
	for (i = 0; src[i]; i++)
	{
		dest[dest_length++] = src[i];
	}
	return (dest);
}
