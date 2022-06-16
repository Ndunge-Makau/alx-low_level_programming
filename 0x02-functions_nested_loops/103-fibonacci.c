#include <stdio.h>

/**
 * main - Entry point
 * Description: finds and prints the sum of the even-valued terms
 * Return: 0
 */

int main(void)
{
	unsigned long f1 = 0, f2 = 1, sum;
	float ssum;

	while (1)
	{
		sum = f1 + f2;
		if (sum > 4000000)
			break;

		if (sum % 2 == 0)
			ssum += sum;
		f1 = f2;
		f2 = sum;
	}
	printf("%0.f\n", ssum);
	return (0);
}
