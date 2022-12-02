#include "main.h"
#include <stdlib.h>

/**
 * print_binary - print the binary representation of the decimal number
 *
 * @n: decimal number
 */
void print_binary(unsigned long int n)
{
	int i = 0, rem;
	unsigned int tmp = n;
	char *bit;

	if (!n)
	{
		_putchar('0');
		return;
	}

	while (tmp > 0)
	{
		tmp = tmp / 2;
		i++;
	}

	bit = malloc((i + 1) * sizeof(char));
	if (!bit)
		return;
	bit[i] = '\0';
	i--;

	while (n > 0)
	{
		rem = n % 2;
		n = n / 2;
		bit[i] = 48 + rem;
		i--;
	}

	for (i = 0; bit[i]; i++)
		_putchar(bit[i]);
	free(bit);
}
