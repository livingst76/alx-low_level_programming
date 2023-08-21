#include "main.h"

/**
 * _puts - print a string; terminate with a new line
 *
 * @s: string
 *
 * Return: nothing.
 */
void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
