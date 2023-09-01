#include <stdio.h>

/**
 * main - print all arguments passed to program
 *
 * @argc: number of command line arguments
 * @argv: pointer to string of command line arguments
 *
 * Return: Always 0 (success)
 */
int main(__attribute__ ((unused)) int argc, char *argv[])
{
	/* GNU89 won't allow using recursion: return value issue */
	while (*argv)
	{
		printf("%s\n", *argv);
		argv++;
	}

	return (0);
}
