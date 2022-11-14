#include "main.h"
#include <stdlib.h>
#include <stdio.h>

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
	int i, j, len = 0, n = 0;

	if (!ac || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
		for (j = 0; av[i][j]; j++)
			len++;
	p = malloc(len * sizeof(char) + ac + 1);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++, n++)
			p[n] = av[i][j];
		p[n] = '\n';
		n++;
	}

	printf("initial: %i\nfinal: %i\n", len, n);
	return (p);
}
