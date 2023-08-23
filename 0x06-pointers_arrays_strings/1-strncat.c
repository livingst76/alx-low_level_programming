#include "main.h"

/**
 * _strncat - concatenates two strings with a maximum of n bytes
 *
 * @dest: string to be appended to
 * @src: string to append
 * @n: max bytes
 *
 * Return: cnt, pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int len = 0, i;

	while (dest[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[len + i] = src[i];
	}

	dest[len + i] = '\0';
	return (dest);
}
