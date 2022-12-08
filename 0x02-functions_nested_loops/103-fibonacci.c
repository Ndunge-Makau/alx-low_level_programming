#include <stdio.h>

/**
 * main - Entry Point
 * Descritpion: finds and prints the sum of the even-valued terms
 * of the Fibonacci series by considering the terms in the Fibonacci sequence
 * whose values do not exceed 4,000,000.
 * Return: 0
 */

int main(void)
{
	int first = 0, second = 1;
	long sum = 0, new_sum = 0;

	while (sum < 4000000)
	{
		sum = first + second;
		first = second;
		second = sum;

		if (sum % 2 == 0)
		{
			new_sum += sum;
		}
	}
	printf("%lu\n", new_sum);
	return (0);
}
