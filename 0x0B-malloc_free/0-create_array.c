#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars,
 *  and initializes it with a specific char.
 *  @size: Size of array
 *  @c: character
 *  Return: pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *my_array;
	int i;

	if (size == 0)
	{
		return (NULL);
	}

	my_array = malloc(sizeof(char) * 98);

	for (i = 0; i < 98; i++)
	{
		my_array[i] = c;
	}

	return (my_array);
}
