#include "main.h"

/**
 * _strchr - find the first occurence of a character in a string
 *
 * @s: string
 * @c: character to be found
 *
 * Return: p, pointer to the first occurence of c; NULL if not found
 */
char *_strchr(char *s, char c)
{
	int boolean = 0, i = 0, j = 0;
	char *p = s;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			p = &s[i];
			boolean = 1;
			break;
		}
		i++;
	}

	if (boolean)
		return (p);
	else
		return (NULL);
}
