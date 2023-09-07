#include <stdlib.h>

/**
 * malloc_checked - allocate memory using malloc.
 *
 * @b: size of memory to be allocated.
 *
 * Return: pointer to allocated memory, 98 if malloc fails.
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (!ptr)
	{
		exit(98);
	}

	return (ptr);
}
