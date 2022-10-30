#include "main.h"

/**
 * puts2 - print inputed string as output
 *
 * @str: inputed string
 */
void puts2(char *str)
{
	char *p = str;

	if (*p == '\0')
	{
		_putchar('\0');
	}
	else
	{
		do {
			_putchar(*p);
			p += 2;
		} while (*p != '\0' && *(p - 1) != '\0');
	}
	_putchar('\n');
}
