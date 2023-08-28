#include <stdio.h>

/**
 * _strchr - locate character in a string.
 *
 * @s: string to be checked
 * @c: character
 *
 * Return: pointer to first occurence of c in string, NULL if not found.
 */
char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}

	if (s[i] == c)
	{
		return (&s[i]);
	}
	else
	{
		return (NULL);
	}
}
