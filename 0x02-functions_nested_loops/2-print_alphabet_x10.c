#include "main.h"

/**
 * print_alphabet_x10 - prints alphabets in lowercase ten times
 *
 * Return: no value
 */
void print_alphabet_x10(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 97; j < 123; j++)
		{
			_putchar((char) j);
		}

		_putchar('\n');
	}
}
