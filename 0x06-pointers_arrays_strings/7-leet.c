#include "main.h"

/**
 * *leet - encodes a string into 1337.
 * @str: string to be checked
 * Return: transformed string
 */

char *leet(char *str)
{
	int index1, index2;
	char s1[] = "aeotl";
	char s2[] = "AEOTL";
	char s3[] = "43071";

	for (index1 = 0; str[index1] != '\0'; index1++)
	{
		for (index2 = 0; index2 < 5; index2++)
		{
			if (str[index1] == s1[index2] ||
					str[index1] == s2[index2])
			{
				str[index1] = s3[index2];
			}
		}
	}
	return (str);
}
