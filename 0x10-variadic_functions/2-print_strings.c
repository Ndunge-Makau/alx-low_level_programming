#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - prints strings, followed by a new line.
 * @separator:  string to be printed between the strings
 * @n: number of strings passed to the function
 * Return: Nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *string;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		string = va_arg(ap, char *);

		if (string == NULL)
			printf("(nil)");
		else
			printf("%s", string);

		if (separator != NULL && i != n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
