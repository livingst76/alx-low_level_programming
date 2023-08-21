#include "main.h"

/**
 * puts_half - print second half of string; terminate with a new line
 *
 * @str: string
 *
 * Return: nothing.
 */
void puts_half(char *str)
{
	int i = 0, n = 0;

	while (str[i])
	{
		i++;
	}

	n = i / 2;

	for (i = i - n; str[i]; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
