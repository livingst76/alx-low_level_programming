#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int last, n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	last = n % 10;

	printf("Last digit of %i ", n);

	if (last > 5)
	{
		printf("is %i and is greater than 5\n", last);
	}

	if (last == 0)
	{
		printf("is %i and is 0\n", last);
	}

	if (last < 6 && last != 0)
	{
		printf("is %i and is less than 6 and not 0\n", last);
	}

	return (0);
}
