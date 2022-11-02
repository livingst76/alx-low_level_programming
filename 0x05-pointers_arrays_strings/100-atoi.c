#include "main.h"
#include <stdio.h>

/**
 * _atoi - convert string to an integer
 *
 * @s: string to be converted
 *
 * Return: n, converted string
 */
int _atoi(char *s)
{
	int boolean = 0, i = -1;
	unsigned int n1 = 0;

	while (*s != '\0')
	{
		if (*s >= '0' && *s <= '9')
		{
			i++;
			n1 = (n1 * 10) + ((int) *s - 48);

			if (*(s - 1) == '-')
			{
				boolean = 1;
			}

			if (*(s + 1) < '0' || *(s + 1) > '9')
			{
				break;
			}
		}
		s++;
	}

	if (boolean)
	{
		return (n1 * -1);
	}
	else
	{
		return (n1);
	}
}
