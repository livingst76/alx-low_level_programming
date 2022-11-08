#include "main.h"
#include <stddef.h>
#include <stdio.h>

/**
 * _strstr - find the first occurence of a substring in a string
 *
 * @haystack: string
 * @needle: substring
 *
 * Return: &s[i], address of first occurence
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int c = 0, i, j, n;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0, n = i; haystack[n] == needle[j] &&
				 needle[j] != '\0' && haystack[n] != '\0'; j++, n++)
			c++;
		if (needle[j] == '\0')
		{
			return (&haystack[i]);
		}
		i = n;

	}
	return (NULL);
}
