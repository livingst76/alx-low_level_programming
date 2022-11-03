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
	char leet[5], rp[5];

	leet[0] = 'A';
	leet[1] = 'E';
	leet[2] = 'O';
	leet[3] = 'T';
	leet[4] = 'L';

	rp[0] = '4';
	rp[1] = '3';
	rp[2] = '0';
	rp[3] = '7';
	rp[4] = '1';

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
