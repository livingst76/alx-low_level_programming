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
	void *ptr;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	ptr = (void *) malloc(nmemb * size);
	if (!ptr)
	{
		return (NULL);
	}

	while (i < nmemb)
	{
		ptr[i] = 0;
		i++;
	}

	return (ptr);
}
