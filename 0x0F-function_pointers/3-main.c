#include "3-calc.h"

/**
 *  main - print result
 *
 * @argc: number of arguments
 * @argv: pointer to string of arguments
 *
 * Return: 0 (success), 98 wrong number of arguments, 99 invalid operator.
 */
int main(int argc, char *argv[])
{
	char s;

	int result, a, b;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (argv[2][1])
	{
		printf("Error\n");
		exit(99);
	}

	s = argv[2][0];
	if (s != '+' && s != '-' && s != '*' && s != '/' && s != '%')
	{
		printf("Error\n");
		exit(99);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	result = (get_op_func(argv[2]))(a, b);
	printf("%i\n", result);
	return (0);
}
