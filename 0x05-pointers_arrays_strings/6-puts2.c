#include "main.h"

/**
 * puts2 - prints odd indexed characters in a string
 *
 * @str: inputed string
 */
void puts2(char *str)
{
	char *p = str;

	if (*p == '\0')
	{
		;
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
