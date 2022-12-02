/**
 * clear_bit - set the value of the bit at the given index to 0
 * @n: pointer to a number
 * @index: index of the bit to be manipulated
 *
 * Return: 1 (success), -1 (failure).
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int m;

	if (index > 63)
		return (-1);

	m = 1 << index;
	if (*n & m)
		*n ^= m;
	return (1);
}
