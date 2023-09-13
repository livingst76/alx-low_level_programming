`````````````````````````````````````````````````````````````````````````````````#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the opcode of the function with specified number of bytes
 *
 * @argc: number of command-line arguments
 * @argv: pointer to arguments
 *
 * Return: 0 (success), 1 invalid number of argc, 2 negative byte
 */
int main(int argc, char **argv)
{
	char *op = (char *) main;
	int bytes, i;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);
	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < bytes; i++)
	{
		if (i == bytes - 1)
			printf("%02hhx\n", op[i]);
		else
			printf("%02hhx ", op[i]);
	}
	return (0);
}
