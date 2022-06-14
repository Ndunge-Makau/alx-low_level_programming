#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase
 * Description: Print the alphabet in lowercase
 * Return: 0
 */

void print_alphabet(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		_putchar(alphabet);
	}
	_putchar('\n');
}

