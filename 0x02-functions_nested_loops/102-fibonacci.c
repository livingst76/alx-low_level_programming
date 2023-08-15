#include <stdio.h>

/**
 * main - print the first 50 fibonacci numbers
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	long fibonacci[3], i;

	fibonacci[0] = 0;
	fibonacci[1] = 1;

	for (i = 2; i < 52; i++)
	{
		fibonacci[2] = fibonacci[1] + fibonacci[0];
		if (i < 51)
		{
			printf("%li, ", fibonacci[2]);
		}
		else
		{
			printf("%li\n", fibonacci[2]);
		}

		fibonacci[0] = fibonacci[1];
		fibonacci[1] = fibonacci[2];
	}
	return (0);
}
