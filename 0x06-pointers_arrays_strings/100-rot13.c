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
	int i, n = 0;
	char AB[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char ab[26] = "abcdefghijklmnopqrstuvwxyz";

	while (s[n] != '\0')
	{
		for (i = 0; i < 26; i++)
		{
			if (AB[i] - s[n] == 0)
			{
				s[n] = 65 + (((s[n] + 13) - 65) % 26);
				break;
			}
			else if (ab[i] - s[n] == 0)
			{
				s[n] = 97 + (((s[n] + 13) - 97) % 26);
				break;
			}
		}
		n++;
	}
	return (s);
}
