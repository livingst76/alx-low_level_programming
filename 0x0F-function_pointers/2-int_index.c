#include "function_pointers.h"

/**
 * int_index - search for the specified integer
 *
 * @array: pointer to the array of integers
 * @size: size of the array
 * @cmp: pointer to the function to be used to compare integers
 *
 * Return: the index of the matched element; -1 if not found.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (!array || !cmp)
	{
		return (-1);
	}

	if (size < 1)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}
	return (-1);
}
