#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elemnets in an array
 *
 * @n: number of elements
 * @a: string/array of elments
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i < n - 1)
		{
			printf("%i, ", *(a + i));
		}
		else
		{
			printf("%i", *(a + i));
		}
	}
	printf("\n");
}
