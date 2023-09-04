#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenate the arguments of a program
 *
 * @ac: number of arguments
 * @av: address of arguments
 *
 * Return: p, pointer to concatenated string.
 */
char *argstostr(int ac, char **av)
{
	char *p;
	int i, j, len, n;

	if (!ac || !av)
	{
		return (NULL);
	}

	len = 0;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			len++;
		}
	}

	p = malloc(len * sizeof(char) + ac + 1);
	if (p == NULL)
	{
		return (NULL);
	}

	n = 0;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++, n++)
		{
			p[n] = av[i][j];
		}
		p[n] = '\n';
		n++;
	}

	return (p);
}
