#include <stdio.h>

/**
 * main - FizzBuzz
 * Description: prints the numbers from 1 to 100, FizzBuzz format
 * Return: 0
 */

int main(void)
{
	int a;

	for (a = 1; a < 101; a++)
	{
		if ((a % 3) == 0)
		{
			if ((a % 5) == 0)
			{
				printf("FizzBuzz ");
			}
			else
			{
				printf("Fizz ");
			}
		}
		else if ((a % 5) == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", a);
		}
	}
	printf("\n");
	return (0);
}
