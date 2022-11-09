#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - print the sum of the two diagonals of a square matrix
 *
 * @a: matrix
 * @size: size of matrix
 */
void print_diagsums(int *a, int size)
{
	int i = 0, sum = 0;

	while (i < size * size)
	{
		sum = sum + a[i];
		i += size + 1;
	}
	printf("%i, ", sum);

	sum = 0;
	i -= size * 2;
	while (i >= 0)
	{
		sum = sum + a[i];
		i -= size -1;
	}
	printf("%i\n", sum);
}
