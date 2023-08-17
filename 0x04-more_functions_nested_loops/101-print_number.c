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
	int i, p, y;
	unsigned int m, k;

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
		_putchar((k / p) + '0');
		k -= p;
		p /= 10;
	}
}
