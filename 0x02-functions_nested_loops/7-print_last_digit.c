#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * Description: prints the last digit of a number
 * @num: integer to be checked
 * Return: Value of last digit
 */

int print_last_digit(int num)
{
	int last_digit;

	if (num < 0)
	{
		last_digit = (num * -1) % 10;
	}
	else
	{
		last_digit = num % 10;
	}
	_putchar(last_digit + '0');
	return (last_digit);
}
