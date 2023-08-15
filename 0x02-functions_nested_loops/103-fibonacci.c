#include <stdio.h>

/**
 * main - calculates the sum of all even fibonacci numbers below 4,000,000
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int fibonacci, initial1, initial2, sum;

	initial1 = 0;
	initial2 = 1;

	do {
		fibonacci = initial2 + initial1;
		initial1 = initial2;
		initial2 = fibonacci;

		if (fibonacci % 2 == 0)
		{
			sum = sum + fibonacci;
		}
	} while (fibonacci < 4000001);

	printf("%i\n", sum);
	return (0);
}
