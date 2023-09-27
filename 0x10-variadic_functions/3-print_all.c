#include "variadic_functions.h"
#include <stdio.h>

void print_char(va_list ap);
void print_int(va_list ap);
void print_float(va_list ap);
void print_string(va_list ap);

/**
 * print_char - print character
 * @ap: Argument
 * Return: 0
 */

void print_char(va_list ap)
{
	printf("%c", va_arg(ap, int));
}

/**
 * print_int - print integer
 * @ap: Argument
 * Return: 0
 */

void print_int(va_list ap)
{
	printf("%d", va_arg(ap, int));
}

/**
 * print_float- print float
 * @ap: Argument
 * Return: 0
 */

void print_float(va_list ap)
{
	printf("%f", va_arg(ap, double));
}

/**
 * print_string - print string
 * @ap: Argument
 * Return: 0
 */

void print_string(va_list ap)
{
	char *string;

	string = va_arg(ap, char *);

	if (string == NULL)
		printf("(nil)");
	printf("%s", string);
}

/**
 * print_all - print anything
 * @format: list of types of arguments passed to the function
 * Return: 0
 */

void print_all(const char * const format, ...)
{
	va_list ap;
	int i = 0;

	va_start(ap, format);

	while (format[i])
	{
		if (format[i] != 'c' || format[i] != 'i' ||
				format[i] != 'f' || format[i] != 's')
			continue;
		switch (format[i])
		{
			case 'c':
				printf("c");
				print_char(ap);
				break;
			case 'i':
				print_int(ap);
				break;
			case 'f':
				print_float(ap);
				break;
			case 's':
				print_string(ap);
				break;
		}
		i++;
	}
	printf("\n");
	va_end(ap);
}
