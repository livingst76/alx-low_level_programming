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
	int m, p;
	unsigned int i, y;

	y = 0;
	p = 1;
	m = n;

	if (n < 0)
	{
		 n *= -1;
		 m = n;
		_putchar('-');
	}

	while (n > 9)
	{
		n /= 10;
		y++;
	}

	for (i = 0; i < y; i++)
	{
		p *= 10;
	}

	for (i = 0; i <= y; i++)
	{
		_putchar(((m / p) % 10) + '0');
		p /= 10;
	}
}
