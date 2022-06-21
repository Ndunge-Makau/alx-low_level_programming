#include <stdio.h>

/**
 * main - Entry point
 * fizz: if divisible by 3
 * buzz: if divisible by 5
 * fizzbuzz: if divisible by both 3 and 5
 * Description: prints the numbers from 1 to 100, FizzBuzz format
 * Return: 0
 */

int main(void)
{
	int a;

	for (a = 1; a <= 100; a++)
	{
		if (((a % 3) == 0) && ((a % 5) == 0))
		{
			printf("FizzBuzz");
		}
		else if ((a % 3) == 0)
		{
			printf("Fizz");
		}
		else if ((a % 5) == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", a);
		}
		printf(" ");
	}
	printf("\n");
	return (0);
}
