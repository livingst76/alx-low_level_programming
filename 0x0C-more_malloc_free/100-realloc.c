#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * _realloc - reallocate a memory block using malloc and free.
 *
 * @ptr: pointer to the memory previously alloocated with a call to malloc.
 * @old_size: size in bytes of the allocated space for ptr.
 * @new_size: size in bytes of the new memory block.
 *
 * Return: pointer to newly allocated memory block, NULL if,
 *         new_size is equal to zero and ptr is not NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *tmp;

	if (new_size == old_size)
	{
		return (ptr);
	}
	else if (!ptr)
	{
		ptr = malloc(new_size);
		if (!ptr)
		{
			return (NULL);
		}
		return (ptr);
	}
	else if (!new_size && ptr)
	{
		free(ptr);
		return (NULL);
	}
	else if (ptr && new_size && old_size)
	{
		tmp = ptr;
		ptr = malloc(new_size);
		if (!ptr)
		{
			return (NULL);
		}

		if (new_size > old_size)
		{
			new_size = old_size;
		}
		ptr = strncpy(ptr, tmp, new_size);
		return (ptr);
	}
}
