#include "main.h"
#include <stdlib.h>

/**
 * array_range - create an array that contains a given range values
 *
 * @min: minimum value
 * @max: maximum value
 *
 * Return: p, pointer to array; NULL on failure.
 */
int *array_range(int min, int max)
{
	int *p, n, i, j;

	if (min > max)
		return (NULL);

	n = max - min + (min / min);
	p = malloc(n * sizeof(int));
	if (!p)
		return (NULL);
	for (i = 0, j = min; j <= max; i++, j++)
		p[i] = j;
	return (p);
}
