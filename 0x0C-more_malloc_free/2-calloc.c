#include <stdlib.h>
#include <string.h>

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
	unsigned int total;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	total = nmemb * size;
	ptr = malloc(total);
	if (!ptr)
	{
		return (NULL);
	}
	return (ptr);
}
