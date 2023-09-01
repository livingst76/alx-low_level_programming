#include "main.h"

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
	unsigned int n1 = 0;

	while (*s != '\0')
	{
		if (*s >= '0' && *s <= '9')
		{
			n1 = (n1 * 10) + ((int) *s - 48);
			if (*(s + 1) < '0' || *(s + 1) > '9')
			{
				while (*s != '\0')
				{
					if ((*s >= 'A' && *s <= 'z') || (*s >= 'a' && *s <= 'z'))
					{
						alnum = 1;
					}
					s++;
				}
				break;
			}
		}
		else if ((*s >= 'A' && *s <= 'z') || (*s >= 'a' && *s <= 'z'))
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
		return (n1 * -1);
	}
	else
	{
		return (n1);
	}
}
