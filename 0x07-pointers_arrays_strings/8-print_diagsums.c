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
	int i, j, n = 0;
	unsigned long sum = 0;

	for (i = 0; i < 2; i++)
	{
		j = n;
		sum = 0;
		while (j < size * size && j >= 0)
		{
			sum = sum + a[j];
			if (n == (size * size) - size)
				j -= size - 1;
			else
				j += size + 1;
		}
		n = j - (size * 2);
		if (!i)
			printf("%lu", sum);
		else
			printf(", %lu\n", sum);
	}
}
