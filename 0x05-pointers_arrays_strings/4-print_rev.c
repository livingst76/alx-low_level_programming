#include "main.h"

/**
 * print_rev - print inputed string as output in reverse order
 *
 * @s: inputed string
 */
void print_rev(char *s)
{
	char *p = s;
	int i, len = 0;

	while (*p != '\0')
	{
		len++;
		p++;
	}

	for (i = len; i >= 0; i--)
	{
		--p;
		if (*p == '\0')
		{
			;
		}
		else
		{
			_putchar(*p);
		}
	}
	_putchar('\n');
}
