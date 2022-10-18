#include "main.h"

/**
 * print_alphabet - prints alphabets in lowercase
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
