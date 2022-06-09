#include <stdio.h>

/**
 * main - Entry Point
 * Description: prints the size of various types
 * Return: 0
 */

int main(void)
{
	char a;

	int b;

	int long c;

	int long long d;

	float f;

	printf("Size of a char: %zu bytes \n", sizeof(a));
	printf("Size of an int: %zu bytes \n", sizeof(b));
	printf("Size of a long int: %zu bytes \n", sizeof(c));
	printf("Size of a long long int: %zu bytes \n", sizeof(d));
	printf("Size of a float: %zu bytes \n", sizeof(f));
	return (0);
}
