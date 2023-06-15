#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid -  returns a pointer to a 2 dimensional array of integers.
 * @width: First element
 * @height: Second element
 * Return: Pointer of array, NULL on failure
 */

int **alloc_grid(int width, int height)
{
	int **my_array;
	int i, j;

	if (width == 0 || height == 0)
		return (NULL);
	my_array = malloc(sizeof(int *) * height);

	if (my_array == NULL)
		return (NULL);
	for (i = 0; i < width; i++)
	{
		my_array[i] = malloc(sizeof(int) * width);

		if (my_array[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(my_array[j]);
			free(my_array);
		}
	}

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			my_array[i][j] = 0;
	return (my_array);
}
