#include "main.h"

/**
 * _puts_recursion - print string, followed by a new line
 *
 * @s: string to be printed
 */
void _puts_recursion(char *s)
{
	static int i = 1;

	if (s[i - 1] == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(s[i - 1]);
	i++;
	_puts_recursion(s);
}
