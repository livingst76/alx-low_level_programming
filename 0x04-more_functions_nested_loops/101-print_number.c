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
	unsigned int i, k, p, y;
	int m;

	y = 0;
	p = 1;
	k = m = n;

	if (n < 0)
	{
		k = m = n * -1;
		_putchar('-');
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
