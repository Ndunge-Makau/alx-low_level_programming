#include "main.h"

/**
 * *rot13 - encodes a string using rot13.
 * @s: string to be transformed
 * Return: transformed string
 */

char *rot13(char *s)
{
	int index1, index2;
	char input[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char output[] = "NOPQRSTUVWXYXABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (index1 = 0; s[index1] != '\0'; index1++)
	{
		for (index2 = 0; index2 < 54; index2++)
		{
			if ((((s[index1] >= 97 && s[index1] <= 122) ||
						(s[index1] >= 65 && s[index1] <= 90)) &&
						s[index1] == input[index2]))
			{
				s[index1] = output[index2];
				break;
			}
		}
	}
	return (s);
}
