#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocate memory using malloc
 *
 * @b: size of memory to be allocated
 *
 * Return: p, pointer to allocated memory on success; 98 on failure.
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (!p)
		exit(98);
	return (p);
}
