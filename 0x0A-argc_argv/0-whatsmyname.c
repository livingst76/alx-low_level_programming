#include <stdio.h>

/**
 * main - print the name of the program
 *
 * @argc: number of command line arguments
 * @argv: pointer to string of command line arguments
 *
 * Return: Always 0 (success)
 */
int main(__attribute__ ((unused)) int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
