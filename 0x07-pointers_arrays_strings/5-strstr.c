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
		if (haystack[i] == needle[0])
		{
			for (j = 0, n = i; j < m; j++, n++)
			{
				if (haystack[n] == needle[j])
					c++;
				else
				{
					c = 0;
					break;
				}
			}
			if (c == m)
			{
			    boolean = 1;
				break;
			}
		}
		if (boolean)
			break;
	}
	if (boolean)
		return (&haystack[i]);
	else
		return (NULL);
}
