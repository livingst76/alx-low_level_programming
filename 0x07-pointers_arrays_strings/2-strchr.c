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
	unsigned int i = 0;

	for (; *(s + i) != '\0'; i++)
		if (*(s + i) == c)
			return (s + i);
	if (*(s + i) == c)
		return (s + i);
	return ('\0');
}
