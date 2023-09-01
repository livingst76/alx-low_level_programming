#include <stdio.h>

/**
 * main - print the number of arguments passed
 *
 * @argc: number of command line arguments
 * @argv: pointer to string of command line arguments
 *
 * Return: Always 0 (success)
 */
int main(int argc, __attribute__ ((unused)) char *argv[])
{
	printf("%i\n", argc);
	return (0);
}
