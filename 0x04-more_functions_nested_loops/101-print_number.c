#include "main.h"

/**
 * print_number - displays input (number) as output
 *
 * @n: integer/number
 */
void print_number(int n)
{
	int a, b, c, d, e, m;

	m = n;
	if (n < 0)
	{
		m = n * -1;
		_putchar('-');
	}

	if (a > 0)
	{
		_putchar((m / 10000) + '0');
		_putchar(((m / 1000) % 10) + '0');
		_putchar(((m / 100) % 10) + '0');
		_putchar(((m / 10) %  10) + '0');
		_putchar((m % 10) + '0');
	}
	else if (b > 0)
	{
		_putchar(((m / 1000) % 10) + '0');
		_putchar(((m / 100) % 10) + '0');
		_putchar(((m / 10) % 10) + '0');
		_putchar((m % 10) + '0');
	}
	else if (c > 0)
	{
		_putchar(((m / 100) % 10) + '0');
		_putchar(((m / 10) % 10) + '0');
		_putchar((m % 10) + '0');
	}
	else if (d > 0)
	{
		_putchar(((m / 10) % 10) + '0');
		_putchar((m % 10) + '0');
	}
	else
	{
		_putchar((m % 10) + '0');
	}
}
