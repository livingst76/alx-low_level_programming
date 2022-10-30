#include "main.h"

/**
 * puts2 - print inputed string as output
 *
 * @str: inputed string
 */
void puts2(char *str)
{
	char *p = str;

	while (*p != '\0')
	{
		_putchar(*p);
		p += 2;
	}
	_putchar('\n');
}
