#include "main.h"

/**
 * *string_toupper - Changes lowercase letters to uppercase
 * @str: string to be changed
 * Return: Pointer of string
 */

char *string_toupper(char *str)
{
	int index = 0;

	while (str[index])
	{
		if (str[index] >= 97 && str[index] <= 122)
		{
			str[index] -= 32;
		}
		index++;
	}
	return (str);
}
