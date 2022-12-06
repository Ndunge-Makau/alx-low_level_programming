#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * Description: prints the last digit of a number
 * @num: integer to be checked
 * Return: Value of last digit
 */

int print_last_digit(int num)
{
	int last_digit = num % 10;
	
	if (num < 0)
	{
		last_digit *= -1;
	}
	_putchar('0' + last_digit);
	return (last_digit);
}
