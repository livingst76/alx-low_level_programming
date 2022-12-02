#include "main.h"

/**
 * get_bit - get the bit at the given index of the decimal number
 *
 * @n: decimal number
 * @index: index to be used
 *
 * Return: value of the bit, -1 on failure (error).
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int tmp = n;
	unsigned int i, j;

	for (i = 0; tmp > 0; tmp >>= 1, i++)
		;

	if (index >= i)
		return (-1);

	if (!n && index < 64)
		return (0);

	for (j = 0; j < index; j++)
		n >>= 1;
	return (n & 1);
}
