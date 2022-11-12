#include <stdio.h>

/**
 * main - print the name of the program
 *
 * @argc: number of command line arguments
 * @argv: pointer to string of command line arguments
 *
 * Return: 0 (success) else, 1 (failure)
 */
int main(__attribute__ ((unused)) int argc, char *argv[])
{
	int i, j, m, result = 0;

	if (argc > 3 || argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	for (i = 1; i < 3; i++)
	{
		m = 0;
		for (j = 0; argv[i][j] != '\0'; j++)
			m = (m * 10) + (argv[i][j] - 48);
		result = result + m;
	}

	printf("%i\n", result);
	return (0);
}
