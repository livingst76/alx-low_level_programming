#include <stddef.h>

/**
 * array_iterator - execute function given as parameter on each element of an
 *                  array of integers.
 *
 * @array: array of integers.
 * @size: size of array.
 * @action: pointer to function to be executed.
 *
 * Return: nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
