#include "main.h"
#include <stddef.h>

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
	unsigned int c = 0, i, j, m = 0, n;
	int boolean = 0;

	while (needle[m] != '\0')
	{
		m++;
	}

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; j < m; j++)
		{
			if (haystack[i] == needle[j])
			{
				boolean = 1;
				break;
			}
			else
				boolean = 0;
		}

		if (boolean)
			c++;
		else
			c = 0;

		if (c == 1)
			n = i;
		if (c == m)
			return (&haystack[n]);
	}
	if (c == m)
		return (&haystack[n]);
	else
		return (0);
}
