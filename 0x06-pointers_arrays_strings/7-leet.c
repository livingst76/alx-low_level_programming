#include "main.h"
#include <stdio.h>

/**
 * leet - encode string into 1337
 *
 * @s: string to be encoded
 *
 * Return: s, encoded string
 */
char *leet(char *s)
{
	int i, n = 0;
	char leet[5] = "AEOTL", rp[5] = "43071";

	while (s[n] != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if ((s[n] - leet[i]) % 32 == 0)
			{
				s[n] = rp[i];
				break;
			}
		}
		n++;
	}

	return (s);
}
