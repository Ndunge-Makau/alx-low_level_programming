#include <stdio.h>

/**
 * main - Entry point
 * Description: Prints the size of various types
 * Return: 0
 */

int main(void)
{
	int intType;
	char charType;
	float floatType;
	double doubleType;

	printf("Size of int: %zu\n", sizeof(intType));
	printf("Size of char: %zu\n", sizeof(charType));
	printf("Size of float: %zu\n", sizeof(floatType));
	printf("Size of double: %zu\n", sizeof(doubleType));
	return (0);
}
