#include "main.h"

/**
 * _strspn - check the number of bytes of the first segment of a string
 *           which consists only of all the bytes in a given string
 *
 * @s: string to be checked
 * @accept: comparative string
 *
 * Return: n, number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, n = 0;
	int boolean = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			boolean = 0;
			if (s[i] == accept[j])
			{
				boolean = 1;
			}
			if (boolean)
			{
				n++;
				break;
			}
		}
		if (!boolean)
			break;
	}
	return (n);
}
