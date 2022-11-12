#include <stdio.h>

/**
 * main - print the name of the program
 *
 * @argc: number of command line arguments
 * @argv: pointer to string of command line arguments
 *
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	while (argc--)
		printf("%s\n", *argv++);
	return (0);
}
