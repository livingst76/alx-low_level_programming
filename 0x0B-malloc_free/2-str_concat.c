#include <stdlib.h>

/**
 * str_concat - concatenate two strings.
 *
 * @s1: first string.
 * @s2: second string.
 *
 * Return: pointer to concatenated string; NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
	char *dp;
	int i, j, len1 = 0, len2 = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	while (s1[len1])
	{
		len1++;
	}

	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s2[len2])
	{
		len2++;
	}

	dp = malloc((len1 + len2 + 1) * sizeof(char));
	if (dp == NULL)
	{
		return (NULL);
	}

	for (i = 0; s1[i]; i++)
	{
		dp[i] = s1[i];
	}

	for (i = len1, j = 0; s2[j]; i++, j++)
	{
		dp[i] = s2[j];
	}

	dp[i] = '\0';

	return (dp);
}
