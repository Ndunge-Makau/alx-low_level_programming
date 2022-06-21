#include "main.h"

/**
 * print_square - prints a square
 * @size: integer to be checked for size of square
 * Return: 0
 */

void print_square(int size)
{
	int a, b;

	if (size <= 0)
	{
		_putchar('\n');
	}

	else
	{
		a = 1;
		while (a <= size)
		{
			b = 1;
			while (b <= size)
			{
				_putchar(35);
				b++;
			}
			_putchar('\n');
			a++;
		}
	}
}
