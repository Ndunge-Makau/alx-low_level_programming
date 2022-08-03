#include "main.h"

/**
 * is_palindrome - Function
 *
 * Description: finds if a string is a palindrome
 *
 * @s: pointer parameter of type char,
 *
 * Return: return 1 if success and 0 if not
 */
int is_palindrome(char *s)
{
	int index = 0;
	int length = _strlen(s);

	if (!(*s))
		return (1);

	return (checks_palindrome(s, length, index));
}

/**
 * checks_palindrome - Function
 *
 * Description: Checks if a string is a palindrome.
 *
 * @s: parameter of type char, string to checked.
 * @length: parameter of type int, length of s.
 * @index: parameter of type int.
 *
 * Return: returns - 1 if success else 0.
 */
int checks_palindrome(char *s, int length, int index)
{
	if (s[index] == s[length / 2])
		return (1);

	if (s[index] == s[length - index - 1])
		return (checks_palindrome(s, length, index + 1));

	return (0);
}

/**
 * _strlen - Function
 * Description: gets the length of a string.
 *
 * @s: parameter of type char, the string.
 *
 * Return: returns length of the string.
 */
int _strlen(char *s)
{
	int length = 0;

	if (*(s + length))
	{
		length++;
		length += _strlen(s + length);
	}

	return (length);
}
