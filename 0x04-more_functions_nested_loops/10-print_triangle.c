#include "main.h"

/**
 * print_triangle - print a triangle with height 'size'
 *
 * @size: height
 */
void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (i = 0; i < size; i++)
	{
		for (j = i; j < size - 1; j++)
		{
			_putchar(' ');
		}

		for (j = -1; j < i; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
