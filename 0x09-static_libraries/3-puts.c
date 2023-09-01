#include "main.h"

/**
 * _puts - print inputed string as output
 *
 * @str: inputed string
 */
void _puts(char *str)
{
	char *p = str;

	while (*p != '\0')
	{
		_putchar(*p);
		p++;
	}
	_putchar('\n');
}
