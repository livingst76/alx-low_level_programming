#include <stddef.h>

/**
 * _strpbrk - search a string for any occurence of a set of bytes
 *
 * @s: string.
 * @accept: substring.
 *
 * Return: pointer to the byte in s that matches one of the bytes in accept,
 *         NULL if not found.
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				return (&s[i]);
			}
		}
	}

	return (NULL);
}
