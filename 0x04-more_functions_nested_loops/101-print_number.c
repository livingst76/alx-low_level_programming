#include "main.h"

/**
 * print_number - displays input (number) as output
 *
 * @n: integer/number
 */
void print_number(int n)
{
	int m;

	m = n;
	if (n < 0)
	{
		m = n * -1;
		_putchar('-');
	}

	if (m >= 10000)
	{
		_putchar((m / 10000) + '0');
		_putchar(((m / 1000) % 10) + '0');
		_putchar(((m / 100) % 10) + '0');
		_putchar(((m / 10) %  10) + '0');
		_putchar((m % 10) + '0');
	}
	else if (m >= 1000)
	{
		_putchar(((m / 1000) % 10) + '0');
		_putchar(((m / 100) % 10) + '0');
		_putchar(((m / 10) % 10) + '0');
		_putchar((m % 10) + '0');
	}
	else if (m >= 100)
	{
		_putchar(((m / 100) % 10) + '0');
		_putchar(((m / 10) % 10) + '0');
		_putchar((m % 10) + '0');
	}
	else if (m >= 10)
	{
		_putchar(((m / 10) % 10) + '0');
		_putchar((m % 10) + '0');
	}
	else
	{
		_putchar((m % 10) + '0');
	}
}
