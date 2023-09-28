#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_all - print anything
 * @format: list of types of arguments passed to the function
 * Return: 0
 */

void print_all(const char * const format, ...)
{
	va_list ap;
	int i = 0;
	char *str;

	if (!format)
	{
		printf("\n");
		return;
	}

	va_start(ap, format);
	while (format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(ap, int));
				break;
			case 'i':
				printf("%d", va_arg(ap, int));
				break;
			case 'f':
				printf("%f", va_arg(ap, double));
				break;
			case 's':
				str = va_arg(ap, char *);
				str = str ? str : "(nil)";
				printf("%s", str);
				break;
		}
		if ((format[i] == 'c' ||
				       format[i] == 'i' ||
				       format[i] == 'f' ||
				      format[i] == 's')
				&& format[i + 1])
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(ap);
}
