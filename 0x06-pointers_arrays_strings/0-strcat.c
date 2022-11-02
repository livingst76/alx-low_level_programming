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
	char *cnt;
	int len = 0, j;

	while (*dest != '\0')
	{
		dest++;
		len++;
	}

	for (j = 0; src[j] != '\0'; j++)
	{
		dest[len + j] = src[j];
	}

	dest[len + j] = '\0';
	cnt = dest;
	return (cnt);
}
