#include "main.h"

/**
 * _memcpy - copy the first given number of bytes of the memory area
 *           of a string to another string
 *
 * @dest: string to be copied to
 * @src: string to be copied
 * @n: given number of bytes
 *
 * Return: p, pointer to result
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;
	char **p = &dest;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (*p);
}
