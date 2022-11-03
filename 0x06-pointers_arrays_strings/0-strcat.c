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
char *_strcat(char *dest, char *src)
{
	int len = 0, i = 0;

	while (*(dest + len) != '\0')
	{
		len++;
	}
	while (i >= 0)
	{
		*(dest + len) = *(src + i);
		if (*(src + i) == '\0')
		{
			break;
		}
		len++;
		i++;
	}
	return (dest);
}
