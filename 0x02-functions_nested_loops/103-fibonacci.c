#include <stdio.h>

/**
 * main - calculates the sum of all even fibonacci numbers below 4,000,000
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	long fibonacci[3], sum;

	sum = 0;

	fibonacci[0] = 0;
	fibonacci[1] = 1;

	while (fibonacci[2] < 4000000)
	{
		fibonacci[2] = fibonacci[1] + fibonacci[0];
		fibonacci[0] = fibonacci[1];
		fibonacci[1] = fibonacci[2];

		if (fibonacci[2] % 2 == 0)
		{
			sum = sum + fibonacci[2];
		}
	}

	printf("%li\n", sum);
	return (0);
}
