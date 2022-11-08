#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - locate the first occurence of any of the bytes in a
 *            comparative string in a given string
 *
 * @s: string to be checked
 * @accept: comparative string
 *
 * Return: &s[i], address of first occurence in s
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;
	int boolean = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				boolean = 1;
				break;
			}
		}
		if (boolean)
			break;
	}
	if (boolean)
		return (&s[i]);
	else
		return (NULL);
}
