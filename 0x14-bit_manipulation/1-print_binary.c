#include "main.h"

/**
 * print_binary - print the binary representation of the decimal number
 *
 * @n: decimal number
 */
void print_binary(unsigned long int n)
{
	unsigned int tmp = n;
	int i, j, k;

	if (!n)
	{
		_putchar('0');
		return;
	}

	for (i = 0; tmp > 0; i++, tmp >>= 1)
		;

	k = j = i;

	while (i > 0)
	{
		tmp = n;
		j = k;
		while (j > 1)
		{
			n >>= 1;
			j--;
		}
		_putchar((n & 1) + '0');
		n = tmp;
		n <<= 1;
		i--;
	}
}
