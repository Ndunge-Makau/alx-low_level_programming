#include "main.h"

/**
 * more_numbers -  prints 10 times the numbers, from 0 to 14
 * Description:  prints 10 times the numbers, from 0 to 14
 * Return: 0
 */

void more_numbers(void)
{
	int a;
	int count = 0;

	while (count++ <= 9)
	{
		for (a = 0; a <= 14; a++)
		{
			if (a > 9)
			{
				_putchar((a / 10) + '0');
			}
			_putchar((a % 10) + '0');
		}
		_putchar('\n');
	}
}
