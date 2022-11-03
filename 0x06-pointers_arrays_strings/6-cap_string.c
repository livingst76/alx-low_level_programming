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
	int i = 0, b;

	while (s[i] != '\0')
	{
		b = i - 1;
		if (i == 0 || s[b] == ',' || s[b] == ';' || s[b] == '.' ||
			s[b] == '!' || s[b] == '?' || s[b] == '"' || s[b] == '(' ||
			s[b] == ')' || s[b] == '{' || s[b] == '}' || s[b] == ' ' ||
			s[b] == '\t' || s[b] == '\n')
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
