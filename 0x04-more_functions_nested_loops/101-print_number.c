#include "main.h"
#include <stdio.h>

/**
 * print_number - displays input (number) as output
 *
 * @n: integer/number
 */
void print_number(int n)
{
	int a, b, c, d, m;

	m = n;
	if (n < 0)
	{
		m = n * -1;
		_putchar('-');
	}

	d = m % 10;
	c = (m / 10) % 10;
	b = (m / 100) % 10;
	a = m / 1000;

	if (a > 0)
	{
		_putchar(a + '0');
		_putchar(b + '0');
		_putchar(c + '0');
		_putchar(d + '0');
	}
	else if (b > 0)
	{
		_putchar(b + '0');
		_putchar(c + '0');
		_putchar(d + '0');
	}
	else if (c > 0)
	{
		_putchar(c + '0');
		_putchar(d + '0');
	}
	else
	{
		_putchar(d + '0');
	}
}
