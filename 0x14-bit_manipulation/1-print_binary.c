#include "main.h"

/**
 * print_binary - print the binary representation of the decimal number
 *
 * @n: decimal number
 */
void print_binary(unsigned long int n)
{
	unsigned long int tmp = n;
	int i, j, k;

	i = 0;
	for (i = 0; tmp > 0; tmp >>= 1, i++)
	{
		;
	}

	k = j = i;

	do {
		tmp = n;
		j = k;
		for (j = k; j > 1; j--)
		{
			n >>= 1;
		}
		_putchar((n & 1) + '0');
		n = tmp;
		/* This works also, but I prefer the other */
		/*n <<= 1;*/
		k--;
		i--;
	} while (i > 0);
}
