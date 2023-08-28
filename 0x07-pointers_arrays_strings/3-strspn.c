#include <strings.h>
#include <ctype.h>

/**
 * _strspn - get the length of a prefix substring.
 *
 * @s: string.
 * @accept: substring.
 *
 * Return: number of bytes in the initial segment of s which consists
 *         only of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, match;

	match = 0;

	for (i = 0; s[i]; i++)
	{
		if (ispunct(s[i]))
		{
			break;
		}

		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				match++;
			}
		}
	}

	return (match);
}
