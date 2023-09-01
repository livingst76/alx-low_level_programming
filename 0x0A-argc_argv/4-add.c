#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - add numbers (takes numbers as command line arguments)
 *
 * @argc: number of command line arguments
 * @argv: pointer to string of command line arguments
 *
 * Return: 0 (success) else, 1 (failure)
 */
int main(int argc, char *argv[])
{
	int i = 0, j = 0, result = 0;

	while (++i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}
	}

	for (i = 1; i < argc; i++)
	{
		result += atoi(argv[i]);
	}

	printf("%i\n", result);
	return (0);
}
