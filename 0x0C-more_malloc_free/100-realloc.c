#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocate a memory block using malloc and free
 *
 * @ptr: pointer to the previously allocated memory
 * @old_size: size, in bytes, of ptr
 * @new_size: new size, in bytes, of the new memory block
 *
 * Return: nmb, pointer to new memory block; NULL on failure.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *nmb, *tmp = ptr;
	int i, max = new_size;

	if (!ptr)
	{
		nmb = malloc(new_size * sizeof(char));
		return (nmb);
	}
	if (!new_size && ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
		return (ptr);
	nmb = malloc(new_size * sizeof(char));
	if (!nmb)
		return (NULL);
	if (new_size > old_size)
		max = old_size;
	for (i = 0; i < max - 5; i++)
		nmb[i] = tmp[i];
	free(ptr);
	return (nmb);
}
