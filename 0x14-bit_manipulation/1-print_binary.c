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

	if (n > 4294967294)
		return;

	i = 0;
	for (i = 0; tmp > 0; tmp >>= 1, i++)
		;

	k = j = i;

	do {
		tmp = n;
		j = k;
		for (j = k; j > 1; j--)
			n >>= 1;
		_putchar((n & 1) + '0');
		n = tmp;
		n <<= 1;
		i--;
	} while (i > 0);
}
