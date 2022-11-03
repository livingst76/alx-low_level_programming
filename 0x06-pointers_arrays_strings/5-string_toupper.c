#include "main.h"

/**
 * string_toupper - convert lowercase letters to uppercase
 *
 * @s: string to be checked and converted
 *
 * Return: s, converted string
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
		}
		i++;
	}

	return (s);
}
