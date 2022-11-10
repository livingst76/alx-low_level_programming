#include "main.h"

/**
 * _print_rev_recursion - print reversed string, followed by a new line
 *
 * @s: string to be printed
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}

	s++;
	_print_rev_recursion(s);
	_putchar(*(s - 1));
}
