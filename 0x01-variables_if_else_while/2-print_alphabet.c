#include <stdio.h>

/**
 * main - Entry point
 * Description: prints the alphabet in lowercase
 * Return: 0
 */

int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	return (0);
}
