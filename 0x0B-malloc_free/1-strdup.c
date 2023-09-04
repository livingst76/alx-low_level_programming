#include <stdlib.h>

/**
 * _strdup - duplicate string given as a parameter.
 *
 * @str: string.
 *
 * Return: pointer to duplicate, NULL if an error occurs (empty string...).
 */
char *_strdup(char *str)
{
	char *dp;
	unsigned int len = 0;

	if (!str)
		return (NULL);

	while (str[len])
		len++;
	dp = malloc((len + 1) * sizeof(char));
	if (!dp)
		return (NULL);
	while (len)
	{
		len--;
		dp[len] = str[len];
	}
	return (dp);
}
