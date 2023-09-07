#include <stdlib.h>

/**
 * array_range - create an array of integers within a range of values.
 *
 * @min: minimum value.
 * @max: maximum value.
 *
 * Return: pointer to array, NULL if min > max or malloc fails.
 */
int *array_range(int min, int max)
{
	int *array, range, i, n;

	if (min > max)
	{
		return (NULL);
	}

	range = (max - min) + 1;

	array = malloc(range * sizeof(int));

	for (i = 0, n = min; n <= max; i++, n++)
	{
		array[i] = n;
	}

	return (array);
}
