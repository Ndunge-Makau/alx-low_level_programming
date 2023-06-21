#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers.
 * @min: minimum value to be included in array
 * @max: maimum value to be included in array
 * Return: pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *my_array;
	int j, num = 0;

	if (min > max)
		return (NULL);
	num = (max - min) + 1;
	my_array = malloc(sizeof(int) * num);

	if (my_array == NULL)
		return (NULL);

	for (j = 0; j < num; j++)
	{
		my_array[j] = min;
		min++;
	}
	return (my_array);
}
