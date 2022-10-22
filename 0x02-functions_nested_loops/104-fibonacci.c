#include <stdio.h>

/**
 * main - print the first 50 fibonacci numbers
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	unsigned long fibonacci[3];
	int i;

	fibonacci[0] = 0;
	fibonacci[1] = 1;

	for (i = 2; i < 100; i++)
	{
		fibonacci[2] = fibonacci[1] + fibonacci[0];
		if (i < 99)
		{
			printf("%lu, ", fibonacci[2]);
		}
		else
		{
			printf("%lu\n", fibonacci[2]);
		}

		fibonacci[0] = fibonacci[1];
		fibonacci[1] = fibonacci[2];
	}
	return (0);
}
