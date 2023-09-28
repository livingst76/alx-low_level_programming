/**
 * flip_bits - get the number of bits needed to be flipped
 *             to convert one number to the other
 *
 * @n: first number
 * @m: second number
 *
 * Return: nb, number of bits needed to be flipped.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, nb = 0;

	for (i = 0; i < 64; n >>= 1, m >>= 1, i++)
	{
		if ((n & 1) != (m & 1))
		{
			nb += 1;
		}
	}
	return (nb);
}
