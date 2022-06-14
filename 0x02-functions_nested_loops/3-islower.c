#include "main.h"

/**
 * _islower - checks for lowercase character
 * Description: Checks for lowercase character
 * @r: character to be checked
 * Return: 1 if lowercase, 0 otherwise
 */

int _islower(int r)
{
	if (r < 96 && r <= 122)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
