#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: string to be checked
 * Return: Length of string
 */
int _strlen_recursion(char *s)
{
	int count = 0;

	if (*s)
	{
		count++;
		return (count + _strlen_recursion(s + 1));
	}
	else
	{
		return (count);
	}
}
