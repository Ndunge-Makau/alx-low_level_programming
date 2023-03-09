#include "main.h"

/**
 * _atoi - convert a string to an integer.
 * @s: string to be converted
 * Return: The integer value of the converted string.
 */

int _atoi(char *s)
{
	int sign = 1, count = 0, i = 0;
	unsigned int num = 0;

	while (s[i])
	{
		count++;
		i++;
	}
	for (i = 0; i < count; i++)
	{
		if (s[i] == '-')
		{
			sign *= -1;
		}
		else if (s[i] >= '0' && s[i] <= '9')
		{
			num = (num * 10) + (s[i] - '0');
		}
		else if (num > 0)
			break;
	}
	return (num * sign);
}
