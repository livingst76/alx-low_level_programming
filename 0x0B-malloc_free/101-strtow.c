#include <stdlib.h>
#include <ctype.h>

/**
 * strtow - split the string int words
 *
 * @str: string
 *
 * Return: p, pointer to towed string: NULL(empty/NULL string, failure).
 */
char **strtow(char *str)
{
	char **p;
	int a[100], h = 0, i, j, n, w;

	if (!str || !*str)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
		if ((!isblank(str[i]) && str[i - 1] == ' ') || (str[i] != ' ' && !i))
		{
			a[h] = i;
		    h++;
		}
	}
	if (!h)
		return (NULL);
	p = (char **) malloc((h + 1) * sizeof(char *));
	if (p == NULL)
		return (NULL);
	for (i = 0; i < h; i++)
	{
		w = 0;
		for (j = a[i]; str[j] != ' ' && str[j] != '\0'; j++)
		{
			w++;
		}
	    p[i] = malloc((w + 1) * sizeof(char));
		if (p[i] == NULL)
		{
			i++;
			while (i--)
				free(p[i]);
			free(p);
			return (NULL);
		}
		for (j = a[i], n = 0; n < w; j++, n++)
			p[i][n] = str[j];
	}
	return (p);
}
