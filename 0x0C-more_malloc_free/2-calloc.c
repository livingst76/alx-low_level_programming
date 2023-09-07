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

	if (!nmemb || !size)
	{
		return (NULL);
	}

	ptr = malloc(nmemb * size);
	if (!ptr)
	{
		return (NULL);
	}

	return (ptr);
}
