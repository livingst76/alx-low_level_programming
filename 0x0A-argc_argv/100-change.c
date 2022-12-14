#include <stdio.h>
#include <stdlib.h>

/**
 * main - calculate the number of coins needed to make change for the customer
 *
 * @argc: argument count
 * @argv: cents/program's name
 *
 * Return: 0 (success) else, 1 (failure)
 */
int main(int argc, char *argv[])
{
	long amount;
	unsigned int change;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	amount = atoi(argv[1]);
	if (amount < 0)
	{
		printf("0\n");
		return (2);
	}
	change = amount / 25;
	amount = amount - ((amount / 25) * 25);
	change = change + (amount / 10);
	amount = amount - ((amount / 10) * 10);
	change = change + (amount / 5);
	amount = amount - ((amount / 5) * 5);
	change = change + (amount / 2);
	amount = amount - ((amount / 2) * 2);
	change = change + (amount / 1);
	amount = amount - ((amount / 1) * 1);
	printf("%u\n", change);
	return (0);
}
