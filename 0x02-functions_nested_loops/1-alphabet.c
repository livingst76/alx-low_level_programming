#include "main.h"

/**
 * print_alphabet - prints alphabets in lowercase
 *
 * Return: no value
 */
void print_alphabet(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		_putchar(i);
	}

	_putchar('\n');
}
