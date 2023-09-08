#include <stdlib.h>
#include <string.h>

/**
 * _calloc - allocate memory using malloc.
 *
 * @nmemb: number of elements.
 * @size: size of elements.
 *
 * Return: pointer to allocated memory, NULL if malloc fails,
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (!nmemb || !size)
	{
		return (NULL);
	}

	ptr = malloc(nmemb * size);
	if (!ptr)
	{
		return (NULL);
	}

	ptr = memset(ptr, 0, nmemb * size);

	return ((void *) ptr);
}
