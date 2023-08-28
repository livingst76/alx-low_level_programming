#include <stddef.h>

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
	while (*s)
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}

	return (NULL);
}
