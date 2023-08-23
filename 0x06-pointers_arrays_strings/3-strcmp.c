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
	int diff = 0, len = 0;

	while (diff == 0)
	{
		if  (s1[len] == '\0' && s2[len] == '\0')
		{
			break;
		}
		diff = s1[len] - s2[len];
		len++;
	}

	return (diff);
}
