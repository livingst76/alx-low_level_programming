#include "main.h"

/**
 * _puts_recursion - print a string followed by a new line recursively.
 *
 * @s: buffer
 *
 * Return: nothing
 */
void _puts_recursion(char *s)
{
	if (!*s)
	{
		_putchar('\n');
		return;
	}

	_putchar(*s);
	_puts_recursion(++s);
}
