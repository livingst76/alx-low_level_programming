#include "main.h"

/**
 * puts_half - prints the right half of a string
 *
 * @str: inputed string
 */
void puts_half(char *str)
{
	char *p = str;
	int len = 0, n = 0;

	while (*p != '\0')
	{
		len++;
		p++;
	}

	while (n < len / 2)
	{
		p--;
		n++;
	}

	while (*p != '\0')
	{
		_putchar(*p);
		p++;
	}
	_putchar('\n');
}
