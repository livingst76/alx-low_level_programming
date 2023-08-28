#include <stddef.h>
#include <string.h>

/**
 * _strstr - get the length of a prefix substring.
 *
 * @s: string.
 * @accept: substring.
 *
 * Return: number of bytes in the initial segment of s which consists
 *         only of bytes from accept.
 */
char *_strstr(char *s, char *accept)
{
	unsigned int i, j, len, n;

	len = strlen(accept);

	for (i = 0; s[i]; i++)
	{
		if (s[i] == accept[0])
		{
			for (j = 1, n = i + 1; accept[j]; j++, n++)
			{
				if (s[n] != accept[j])
				{
					break;
				}

				if (j == len - 1)
				{
					return (&s[i]);
				}

			}
		}
	}

	return (NULL);
}
