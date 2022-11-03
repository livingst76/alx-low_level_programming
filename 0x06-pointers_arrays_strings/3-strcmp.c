#include "main.h"
#include <stdio.h>

/**
 * _strcmp - compares two strings
 *
 * @s1: string to be compared with/to
 * @s2: string to be compared
 *
 * Return: boolean: 0 if they are equal; negative value if s1 is less than s2
 *         else, a  postive value
 */
int _strcmp(char *s1, char *s2)
{
	int boolean = 0, diff = 0, len1 = 0, len2 = 0;

	while (s1[len1] != '\0' || s2[len2] != '\0')
	{
		if (s1[len1] != '\0')
		{
			len1++;
		}

		if (s2[len2] != '\0')
		{
			len2++;
		}

		if (s1[len1] != s2[len2])
		{
			diff++;
		}
	}

	if (diff > 0 && len1 > len2)
	{
		boolean = s1[len1 - 1] - 48;
	}
	else if (diff > 0 && len1 < len2)
	{
		boolean = 48 - s2[len2 - 1];
	}
	else if (diff > 0 && len1 == len2)
	{
		boolean = s1[len1 - 1] - s2[len2 - 1];
	}

	return (boolean);
}
