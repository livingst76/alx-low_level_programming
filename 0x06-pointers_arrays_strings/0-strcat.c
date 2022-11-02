#include "main.h"
#include <stdio.h>

/**
 * _strcat - concatenates two strings
 *
 * @dest: string to be appended to
 * @src: string to append
 *
 * Return: cnt, pointer to dest
 */
char *_strcat(char *dest,  char *src)
{
	int len = 0, i = 0;

	while (*dest != '\0')
	{
		dest++;
		len++;
	}

	while (i >= 0)
	{
		*(dest + len) = *src;
		if (*src == '\0')
		{
			break;
		}
		src++;
		len++;
	}

	return (dest);
}
