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
	unsigned int i;

	if (!n && index < 64)
	{
		return (0);
	}

	for (i = 0; i < 64; n >>= 1, i++)
	{
		if (i == index)
		{
			return (n & 1);
		}
	}

	return (-1);
}
