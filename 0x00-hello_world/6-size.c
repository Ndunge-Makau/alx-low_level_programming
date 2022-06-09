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

	printf("Size of int: %lu\n", sizeof(intType));
	printf("Size of char: %lu\n", sizeof(charType));
	printf("Size of float: %lu\n", sizeof(floatType));
	printf("Size of double: %lu\n", sizeof(doubleType));
	return (0);
}
