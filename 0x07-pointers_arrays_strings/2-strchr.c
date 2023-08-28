#include <stdio.h>

/**
 * _strchr - locate character in a string.
 *
 * @s: string to be checked
 * @c: character
 *
 * Return: ptr, pointer to first occurence of c in string, NULL if not found.
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
		i++;
	}

	return (NULL);
}
