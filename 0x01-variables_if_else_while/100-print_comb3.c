#include <stdio.h>

/**
 * main - Entry point
 * Descritpion: prints all possible different combinations of two digits.
 * Return: 0
 */

int main(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (i == j || i > j)
				continue;
			else
			{
				putchar('0' + i);
				putchar('0' + j);
				if (i == 8 && j == 9)
					continue;
				else
				{
					putchar(',');
					putchar(' ');
				}
			}

		}
	}
	putchar('\n');
	return (0);
}
