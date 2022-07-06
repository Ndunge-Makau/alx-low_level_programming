#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 * Return: positve integer if s1 is greater
 * negative interger if s1 is less than s2
 * 0 if equal
 */

int _strcmp(char *s1, char *s2)
{
	int difference = 0;

	while (difference == 0)
	{
		difference = *s1 - *s2;

		if (*s1 == '\0' || *s2 == '\0')
			break;
		s1++;
		s2++;
	}
	return (difference);
}
