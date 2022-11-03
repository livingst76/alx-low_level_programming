#include "main.h"

/**
 * reverse_array - reverse the content of an array of integers
 *
 * @a: array of integers to be reversed
 * @n: number of elments in the array
 */
void reverse_array(int *a, int n)
{
	int i = 0, j, tmp;

	for (i = 0, j = n - 1; i < j; i++, j--)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
	}
}
