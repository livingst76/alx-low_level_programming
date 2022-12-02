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

	if (n < 0)
		return;

	for (i = 0; tmp > 0; i++, tmp >>= 1)
		;

	k = j = i;

	do {
		tmp = n;
		for (j = k; j > 1; j--)
			n >>= 1;
		_putchar((n & 1) + '0');
		j = k;
		n = tmp;
		n <<= 1;
		i--;
	} while (i > 0);

}
