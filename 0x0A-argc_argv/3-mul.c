#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiply numbers (takes numbers as command line arguments)
 *
 * @argc: number of command line arguments
 * @argv: pointer to string of command line arguments
 *
 * Return: 0 (success) else, 1 (failure)
 */
int main(int argc, char *argv[])
{
	int i, result = 1;

	if (argc > 3 || argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	for (i = 1; i < 3; i++)
		result = result * atoi(argv[i]);

	printf("%i\n", result);
	return (0);
}
