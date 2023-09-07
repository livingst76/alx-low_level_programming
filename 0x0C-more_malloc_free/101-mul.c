#include "main.h"
#include <stdio.h>
#include <stdlib.h>

void get_result(char *av[], char *res, int i, int m, int d);
void is_zero(char *av[]);
char *malloc_result(int max);
void sort_numbers(char *av[], int *m, int *n);

/**
 * main - multiply two strings of numbers
 *
 * @ac: number of command line arguments
 * @av: pointer to program's name and strings of numbers
 *
 * Return: 0 on sucesss, exit status 98 on failure
 * Note: works only for positive numbers in base 10.
 */
int main(int ac, char *av[])
{
	int m = 0, n = 0;
	char *result;

	if (ac != 3)
	{
		printf("Error\n");
		exit(98);
	}

	is_zero(av);
	sort_numbers(av, &m, &n);
	result = malloc_result(m + n + 1);
	get_result(av, result, n - 1, m, m + n - 1);

	if (result[0] == 48)
	{
		free(result);
		result = malloc_result(m + n);
		get_result(av, result, n - 1, m, m + n - 2);
	}

	printf("%s\n", result);
	free(result);
	return (0);
}

/**
 * is_zero - check if any of the numbers is 0
 *
 * @av: string of numbers
 */
void is_zero(char *av[])
{
	int i, isn1 = 1, isn2 = 1;

	for (i = 0; av[1][i]; i++)
	{
		if (av[1][i] != 48)
		{
			isn1 = 0;
			break;
		}
	}

	for (i = 0; av[2][i]; i++)
	{
		if (av[2][i] != 48)
		{
			isn2 = 0;
			break;
		}
	}

	if (isn1 || isn2)
	{
		printf("0\n");
		exit(0);
	}
}

/**
 * sort_numbers - check the length of the numbers and their validity
 *
 * @av: numbers to be checked
 * @m: length of multiplicand
 * @n: length of multiplier
 */
void sort_numbers(char *av[], int *m, int *n)
{
	while (av[1][*m] || av[2][*n])
	{
		if (((av[1][*m] < 48 || av[1][*m] > 57) && av[1][*m]) ||
			((av[2][*n] < 48 || av[2][*n] > 57) && av[2][*n]))
		{
			printf("Error\n");
			exit(98);
		}
		if (av[1][*m])
			*m = *m + 1;
		if (av[2][*n])
			*n = *n + 1;
	}
}

/**
 * malloc_result - allocate memory for the string of the result
 *
 * @max: maximum number of bytes to be allocated
 *
 * Return: res, pointer to the allocated memory; NULL on failure.
 */
char *malloc_result(int max)
{
	char *res;
	int i;

	res = malloc(max * sizeof(char));
	if (!res)
		exit(97);
	for (i = 0; i < max - 1; i++)
		res[i] = 48;
	res[i] = 0;
	return (res);
}

/**
 * get_result - perform multiplicaton operation on numbers
 *
 * @av: numbers to be multiplied
 * @res: result
 * @n: multiplier digits
 * @m: multiplicand
 * @d: result's string index
 */
void get_result(char *av[], char *res, int n, int m, int d)
{
	int a, b, carry = 0, i, j, y = 0;

	if (n < 0)
		return;

	b = av[2][n] - 48;
	for (i = d, j = m - 1; j >= 0; i--, j--)
	{
		a = av[1][j] - 48;
		y = (a * b + carry + (res[i] - 48)) / 10;
		res[i] = 48 + ((a * b + carry + (res[i] - 48)) % 10);
		carry = y;
	}

	if (i >= 0)
		res[i] = res[i] + carry;
	get_result(av, res, --n, m, --d);
}
