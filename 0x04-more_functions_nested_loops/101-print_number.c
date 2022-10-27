#include "main.h"

/**
 * print_number - displays input (number) as output
 *
 * @n: integer/number
 *
 * Return: returns no value
 */
void print_number(int n)
{
	int k, m, p;
	unsigned int i, y;

	y = 0;
	p = 1;

	if (n < 0)
	{
		 m = n * -1;
		 k = m;
		_putchar('-');
	}
	else
	{
		m = n;
		k = m;
	}

	while (m > 9)
	{
		m /= 10;
		y++;
	}

	for (i = 0; i < y; i++)
	{
		p *= 10;
	}

	for (i = 0; i <= y; i++)
	{
		_putchar(((k / p) % 10) + '0');
		p /= 10;
	}
}
