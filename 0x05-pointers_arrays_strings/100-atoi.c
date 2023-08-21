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
	int alnum = 0, boolean = 0;
	unsigned int n = 0;

	while (*s != '\0')
	{
		if (*s >= '0' && *s <= '9')
		{
			n = (n * 10) +  (*s - 48);
			if (*(s + 1) < '0' || *(s + 1) > '9')
			{
				while (*s != '\0')
				{
					if ((*s >= 'A' && *s <= 'z') || (*s >= 'a' && *s <= 'z'))
					{
						alnum = 1;
						break;
					}
					s++;
				}
				break;
			}
		}
		else if ((*s >= 'A' && *s <= 'Z') || (*s >= 'a' && *s <= 'z'))
		{
			alnum = 1;
		}
		else if (*s == '-')
		{
			boolean = 1;
		}
		s++;
	}

	if (boolean && !alnum)
	{
		return (n * -1);
	}
	else
	{
		return (n);
	}
}
