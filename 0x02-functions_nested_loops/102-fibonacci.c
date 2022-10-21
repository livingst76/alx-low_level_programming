#include <stdio.h>

/**
 * main - print the first 50 fibonacci numbers
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	long fibonacci[50], i;

	fibonacci[0] = 0;
	fibonacci[1] = 1;

	for (i = 2; i < 52; i++)
	{
		fibonacci[i] = fibonacci[i -1] + fibonacci[i -2];
		printf("%li, ", fibonacci[i]);
	}
	printf("\n");

	return (0);
}
