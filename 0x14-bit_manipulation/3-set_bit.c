/**
 * set_bit - set the value of the bit at the given index to
 * @n: pointer to a number
 * @index: index of the bit to be manipulated
 *
 * Return: 1 (success), -1 (failure).
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int tmp = *n, pow = 1;
	unsigned int i;

	for (i = 0; i < 64; *n >>= 1, i++)
	{
		if (i)
			pow *= 2;

		if (i == index)
		{
			if (!(*n & 1))
			{
				*n = tmp;
				*n += pow;
			}
			return (1);
		}
	}
	return (-1);
}
