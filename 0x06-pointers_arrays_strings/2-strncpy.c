#include "main.h"

/**
 * _strncpy - copy strings with a maximum number of bytes
 *
 * @src: pointer to the string to be copied
 * @dest: string to be copied to
 * @n: maximum number of bytes
 *
 * Return: the pointer to dest;
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
