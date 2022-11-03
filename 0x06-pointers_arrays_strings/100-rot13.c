#include "main.h"

/**
 * rot13 - encode string using rot13
 *
 * @s: string to be encoded
 *
 * Return: s, encoded string
 */
char *rot13(char *s)
{
	int a, i, n = 0;
	char ab[52] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";

	while (s[n] != '\0')
	{
		for (i = 0; i < 52; i++)
		{
			if (ab[i] - s[n] == 0)
			{
				a = 65 + (ab[i] - ab[i % 26]);
				s[n] = a + (((s[n] + 13) - a) % 26);
				break;
			}
		}
		n++;
	}
	return (s);
}
