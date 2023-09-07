#include <stdlib.h>

/**
 * string_nconcat - concatenate two strings.
 *
 * @s1: first string.
 * @s2: second string.
 * @n: bytes of s2 to be concatenated
 *
 * Return: pointer to concatenated string; NULL on failure.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int i, j, len1, len2;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	len1 = 0;
	while (s1[len1])
		len1++;

	len2 = 0;
	while (s2[len2])
		len2++;

	if (len2 > n)
		len2 = n;

	concat = malloc((len1 + len2 + 1) * sizeof(char));
	if (concat == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		concat[i] = s1[i];

	for (i = len1, j = 0; j < len2; i++, j++)
		concat[i] = s2[j];

	concat[i] = '\0';

	return (concat);
}
