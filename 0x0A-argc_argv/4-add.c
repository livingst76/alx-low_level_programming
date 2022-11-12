#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * main - add an infinite number of numbers
 *
 * @argc: number of command line arguments
 * @argv: pointer to string of command line arguments
 *
 * Return: 0 (success) else, 1
 */
int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	if (argc < 2)
	{
		printf("0\n");
		return (2);
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}

	printf("%i\n", sum);
	return (0);
}
