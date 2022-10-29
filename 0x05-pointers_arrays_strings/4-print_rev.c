#include "main.h"

/**
 * print_rev - print inputed string as output in reverse order
 *
 * @s: inputed string
 */
void print_rev(char *s)
{
	char *p = s;
	int len = 0;

	while (*p != '\0')
	{
		len++;
		p++;
	}

	while (len > -1)
	{
		_putchar(*p);
		len--;
		p--;
	}
	_putchar('\n');
}
