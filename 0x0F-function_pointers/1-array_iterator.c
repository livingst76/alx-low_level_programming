#include "function_pointers.h"

/**
 * array_iterator - execute a function given as a parameter on each
 *                  element of an array
 *
 * @array: pointer to array of elements
 * @size: szie of the array
 * @action: pointer to fucntion to be executed.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i;

	if (array && size && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
