#include <stdlib.h>
#include "main.h"

/**
 * word_length - return the length of a word
 * @str: string with words
 * Return: length of first word in string
 */

int word_length(char *str)
{
	int index = 0, len = 0;

	while (*(str + index) && *(str + index) != ' ')
	{
		len++;
		index++;
	}
	return (len);
}

/**
 * word_count - return number of words found in a string
 * @str: string
 * Return: Number of words in a string
 */

int word_count(char *str)
{
	int index = 0, words = 0, len = 0;

	for (index = 0; *(str + index); index++)
		len++;

	for (index = 0; index < len; index++)
	{
		if (*(str + index) != ' ')
		{
			words++;
			index += word_length(str + index);
		}
	}
	return (words);
}

/**
 * strtow - returns a pointer to an array of strings (words)
 * @str: string
 * Return:  a pointer to an array of strings
 */

char **strtow(char *str)
{
	char **my_array;
	int i, j, letters = 0, words = 0, index = 0;

	if (str == NULL || *str == '\0')
		return (NULL);

	words = word_count(str);

	my_array = malloc(sizeof(char *) * (words + 1));

	if (my_array == NULL)
		return (NULL);

	for (i = 0; i < words; i++)
	{
		while (str[index] == ' ')
			index++;
		letters = word_length(str + index);

		my_array[i] = malloc(sizeof(char) * (letters + 1));
		if (my_array == NULL)
		{
			while (i >= 0)
			{
				free(my_array[i]);
				i--;
			}
			free(my_array);
			return (NULL);
		}
		for (j = 0; j < letters; j++)
		{
			my_array[i][j] = str[index];
			index++;
		}
		my_array[i][j] = '\0';
	}
	my_array[i] = NULL;
	return (my_array);
}

