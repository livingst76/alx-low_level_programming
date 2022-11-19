#include "main.h"
#include <stdio.h>
#include <stdlib.h>

void addition(char **mul, char *res, int n, int m);
char *malloc_sum(int max);
char **matrix(int m, int n);
void multiplication(char *av[], char **res, int i, int m);
void sort_numbers(char *av[], int *m, int *n);

/**
 * main - multiply two strings of numbers
 *
 * @ac: number of command line arguments
 * @av: pointer to program's name and strings of numbers
 *
 * Return: 0 on sucesss, exit status 98 on failure
 * Note: works only for positive numbers.
 */
int main(int ac, char *av[])
{
	int i = 0, m = 0, n = 0;
	char **mul, *result;

	if (ac != 3)
	{
		printf("Error\n");
		exit(98);
	}

	sort_numbers(av, &m, &n);
	mul = matrix(m, n);
	result = malloc_sum(m + n);
	multiplication(av, mul, --n, m);
	addition(mul, result, n, m);
	printf("%s\n", result);

	free(av[1]);
	free(av[2]);
	while (mul[i])
	{
		free(mul[i]);
		i++;
	}
	free(mul);
	free(result);
	return (0);
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
	char *temp;
	int tmp, i;

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

	if (*n > *m)
	{
		tmp = *n;
		*n = *m;
		*m = tmp;
		temp = malloc((*n + 1) * sizeof(char));
		if (!temp)
			exit(/*-1*/98);
		for (i = 0; i < *n; i++)
			temp[i] = av[1][i];
		av[1] = malloc((*m + 1) * sizeof(char));
		if (!av[2])
			exit(/*-2*/ 98);
		for (i = 0; i < *m; i++)
			av[1][i] = av[2][i];
		for (i = 0; i < *n; i++)
			av[2][i] = temp[i];
		av[1][*m] = 0;
		av[2][*n] = 0;
		free(temp);
	}
}

/**
 * malloc_sum - allocate memory to the string of the result
 *
 * @max: maximum number of bytes to be allocated
 *
 * Return: res, pointer to the allocated memory; NULL on failure.
 */
char *malloc_sum(int max)
{
	char *res;
	int i;

	res = malloc(max * sizeof(char));
	if (!res)
		exit(/*97*/98);
	for (i = 0; i < max; i++)
		res[i] = 48;
	res[max] = 0;
	return (res);
}

/**
 * matrix - allocate memory to the two dimensional array of the result
 *           for the multiplication operation result
 * @m: height of the array
 * @n: width of the array
 *
 * Return: pointer to allocated memory.
 */
char **matrix(int m, int n)
{
	char **pp;
	int i;

	pp = malloc((n + 1) * sizeof(char *));
	if (!pp)
		exit(/*-3*/98);

	for (i = 0; i < n; i++)
	{
		pp[i] = malloc((m + 2) * sizeof(char));
		if (!pp[i])
		{
			while (i >= 0)
			{
				free(pp[i]);
				i--;
			}
			free(pp);
			exit(/*-4*/98);
		}
	}
	pp[n] = NULL;
	return (pp);
}

/**
 * multiplication - performm multiplicaton operation on numbers picking
 *                  one digit at a time from the multiplier without addition
 *
 * @av: numbers to be multiplied
 * @res: result
 * @i: multiplier digits
 * @m: multiplicand
 */
void multiplication(char *av[], char **res, int i, int m)
{
	int a, b, carry = 0, j;

	if (i < 0)
		return;

	b = av[2][i] - 48;
	for (j = m, res[i][j + 1] = '\0'; j > 0; j--)
	{
		a = av[1][j - 1] - 48;
		res[i][j] = 48 + ((carry + a * b) % 10);
		carry = (carry + a * b) / 10;
	}

	res[i][0] = 48 + carry;
	multiplication(av, res, --i, m);
}

/**
 * addition - add results of the multiplication operation
 *
 * @mul: array of mutiplication results
 * @res: result of the addition
 * @n: height of the array (multiplication)
 * @m: width of the array
 */
void addition(char **mul, char *res, int n, int m)
{
	int carry = 0, i, j, a, b = m + n, y;

	for (i = n; i >= 0; i--)
	{
		for (a = b, j = m; j >= 0; a--, j--)
		{
			y = ((carry + res[a] + mul[i][j]) - 96) / 10;
			res[a] = 48 + (((carry + res[a] + mul[i][j]) - 96) % 10);
			carry = y;
		}
		b--;
	}

	if (res[0] == 48)
		for (i = 0; res[i + 1]; i++)
			res[i] = res[i + 1];
	res[i] = 0;
}
