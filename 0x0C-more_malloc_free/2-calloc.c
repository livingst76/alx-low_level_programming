#include <stdlib.h>

/**
 * _calloc - allocate memory using malloc.
 *
 * @nmemb: number of elements.
 * @size: size of elements.
 *
 * Return: pointer to allocated memory, NULL if malloc fails,
 *         nmemb or size equals 0.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	ptr = malloc(nmemb * size);
	if (!ptr)
	{
		return (NULL);
	}

	for (i = 0; i < nmemb; i++)
	{
		ptr[i] = 0;
	}

	return (ptr);
}
