#include <stdio.h>
#include <ctype.h>

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
	int i, j, m, result = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (1);
	}

	for (i = 1; i < argc; i++)
	{
		m = 0;
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
			m = (m * 10) + (argv[i][j] - 48);
		}
		result = result + m;
	}

	printf("%i\n", result);
	return (0);
}
