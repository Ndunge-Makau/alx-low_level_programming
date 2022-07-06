#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: array of integers
 * @n: number of elements of the array
 * Return: 0
 */

void reverse_array(int *a, int n)
{
	int b, temporary;

	for (b = 0; b < n--; b++)
	{
		temporary = a[b];
		a[b] = a[n];
		a[n] = temporary;
	}
}
