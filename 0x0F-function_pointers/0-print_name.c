#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: Name to be printed
 * @f: pointer to function that gives format needed to print name
 * Return: 0
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
