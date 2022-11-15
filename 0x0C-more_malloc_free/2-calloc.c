#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocate memory for an array; initialize all elements to 0
 *
 * @nmemb: number of elements
 * @size: size of bytes of each element
 *
 * Return: p, pointer to allocated memory; NULL on failure.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *p;

	if (nmemb < 1 || size < 1)
		return (NULL);

	p = malloc(nmemb * size);
	if (!p)
		return (NULL);
	for (i = 0; i < nmemb; i++)
		` p[i] = 0;
	return ((void *) p);
}
