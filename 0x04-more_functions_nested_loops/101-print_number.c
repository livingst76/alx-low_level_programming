#include "main.h"
#include <stdio.h>

/**
 * print_number - displays input (number) as output
 *
 * @n: integer/number
 */
void print_number(int n)
{
	int i, k, m, y = 0, p = 1;

	k = m = n;
	if (n < 0)
	{
		k = m = n * -1;
		_putchar('-');
	}

	while(m > 9)
	{
		m /= 10;
		y++;
	}

	for (i = 0; i < y; i++)
	{
		p *= 10;
	}

	while (y > -1)
	{
		_putchar(((k / p) % 10) + '0');
		p /= 10;
		y--;
	}
}
