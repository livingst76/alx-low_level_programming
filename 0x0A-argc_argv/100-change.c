#include <stdio.h>
#include <stdlib.h>

/**
  * main - calculate min number of coins needed to make change for cents
  *
  * @argc: number of command line arguments passed
  * @argv: amount of cents
  *
  * Return: 0 (success), 1 if argc is not equal to 1.
  */
int main(int argc, char **argv)
{
	/* Initialising amount will cause a segmentation fault in a base case */
	int amount, change = 0, cents[5] = {25, 10, 5, 2, 1}, i;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	amount = atoi(argv[1]);

	for (i = 0; amount > 0; i++)
	{
		change += amount / cents[i];
		amount %= cents[i];
	}

	printf("%i\n", change);

	return (0);
}
