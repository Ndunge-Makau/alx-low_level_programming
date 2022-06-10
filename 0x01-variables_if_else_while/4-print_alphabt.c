#include <stdio.h>

/**
 * main - Entry point
 * Description: Print all the letters except q and e
 * Return: 0
 */

int main(void)
{
	char alphabet;

	for  (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		if (alphabet != 'q' && alphabet != 'e')
		putchar(alphabet);
	}

	putchar('\n');
	return (0);
}
