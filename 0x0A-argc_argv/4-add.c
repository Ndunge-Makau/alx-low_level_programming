#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 * @argc: number of arguments
 * @argv: array containing arguments
 * Return: 1 f one of the number contains 
 * 	symbols that are not digits,
 * 	0 otherwise
 */
int main(int argc, char *argv[])
{
	int i, x, sum = 0;
	
	for (i = 1; i < argc; i++)
	{
		for (x = 0; argv[i][x]; x++)
		{
			if (argv[i][x] < '0' || argv[i][x] > '9')
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				sum += atoi(argv[i]);
			}
		}
	}
	printf("%d\n", sum);
	return (0);
}
