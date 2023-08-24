#include <stdio.h>
#include "3-calc.h"

/**
 * main - Do math calculation entered by user
 * @argc: Number of arguments entered
 * @argv: Array containing arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int count = 0;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (get_op_func(argv[2]) == NULL || argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if ((strcmp(argv[2], "/") == 0 || strcmp(argv[2], "%") == 0) &&
			(atoi(argv[3]) == 0))
	{
		printf("Error\n");
		exit(100);
	}

	func = get_op_func(argv[2]);
	count = func(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", count);
	return (0);
}
