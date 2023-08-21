#include "main.h"

/**
 * puts2 - print every other charcter of string; begin with first character.
 *         Terminate with a new line
 *
 * @str: string
 *
 * Return: nothing.
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
	{
		if (!(i % 2))
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
