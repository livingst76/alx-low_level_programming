#include "main.h"
#include <stdlib.h>
#include <stdio.h>

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
	int *a, h = 0, i, j, n, w;

	if (!str || !*str)
		return (NULL);
	a = malloc(h * sizeof(int));
	for (i = 0; str[i]; i++)
	{
		if ((str[i] != ' ' && str[i - 1] == ' ') || (str[i] != ' ' && !i))
		{
			a[h] = i;
			while (str[i] != ' ')
				i++;
			h++;
		}
	}
	p = malloc(h * sizeof(char) + 1);
	if (!p)
		return (NULL);
	for (i = 0; i < h; i++)
	{
		w = 0;
		for (j = a[i]; str[j] != ' ' && str[j]; j++)
			w++;
	    p[i] = malloc(w * sizeof(char) + 1);
		if (!p[i])
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
	free(a);
	return (p);
}
