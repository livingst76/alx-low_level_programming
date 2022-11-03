#include "main.h"

/**
 * reverse_array - reverse the content of an array of integers
 *
 * @a: array of integers to be reversed
 * @n: number of elments in the array
 */
void reverse_array(int *a, int n)
{
	int i = 0, j;
	unsigned int tmp;

	n--;
	j = n / 2;

	while (j >= 0)
	{
		tmp = a[i];
		a[i] = a[n];
		a[n] = tmp;
		i++;
		j--;
		n--;
	}
}
