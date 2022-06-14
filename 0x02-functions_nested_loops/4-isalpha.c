#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: The character to be checked
 * Description: Checks for alphabetic character
 * Return: 1 if alphabet, 0 otherwise
 */

int _isalpha(int c)
{
	if ((c > 64 && c <= 90) ||
			(c > 96 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

