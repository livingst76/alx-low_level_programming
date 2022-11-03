#include "main.h"

/**
 * cap_string - capitalise the first letter of each word in a string
 *
 * @s: string of words
 *
 * Return: s, modified string
 */
char *cap_string(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (i == 0 || s[i - 1] < 'A' ||
			(s[i - 1] > 'Z' && s[i - 1] < 'a') || s[i - 1] > 'z')
		{
			if (s[i] >= 'a' && s[i] <= 'z')
			{
				s[i] = s[i] - 32;
			}
		}
		i++;
	}

	return (s);
}
