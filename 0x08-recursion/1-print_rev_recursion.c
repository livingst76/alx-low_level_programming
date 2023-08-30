#include "main.h"

/**
 * _print_rev_recursion - print string recursively in reverse.
 *
 * @s: buffer
 *
 * Return: nothing
 */
void _print_rev_recursion(char *s)
{
	if (!*s)
	{
		return;
	}

	_print_rev_recursion(++s);
	_putchar(*(s - 1));
}
