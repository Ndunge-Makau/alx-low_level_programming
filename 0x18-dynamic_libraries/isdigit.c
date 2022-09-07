#include "main.h"

/**
 * _isdigit - checks for diti 0 to 9
 * @c: parameter
 * Return: 1 if c is digit 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
