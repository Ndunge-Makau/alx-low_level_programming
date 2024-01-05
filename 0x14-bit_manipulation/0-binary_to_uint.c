#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: string of binary number
 * Return: Converted number, 0 if there is one or more chars
 *	in the string b that is not 0 or 1 or if b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0, len = 0;
	int i;

	len = _strlen(b);

	if (b == NULL)
	{
		return (0);
	}

	for (i = 0; i < _strlen(b); i++)
	{
		if (b[i] == '1')
		{
			num += _power(2, (len - 1));
			len -= 1;
		}
		else if (b[i] == '0')
		{
			len -= 1;
		}
		else
		{
			return (0);
		}

	}
	return (num);
}

/**
 * _strlen - returns the length of a string
 * @s: string to be checked
 * Return: length of string
 */

int _strlen(const char *s)
{
	int count = 0, i = 0;

	while (s[i])
	{
		count++;
		i++;
	}
	return (count);
}

/**
 * _power - returns the value of x raised to the power of y
 * @x: Value
 * @y: power value
 * Return: value of x raised to the power of y
 */

int _power(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 1)
	{
		return (x);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
		return (x * _power(x, y - 1));
}

