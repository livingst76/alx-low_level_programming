/**
 * binary_to_uint - convert binary number to unsigned int
 *
 * @b: string of binary numbers
 *
 * Return: res,  converted number.
 */
unsigned int binary_to_uint(const char *b)
{
	int i, j, n;
	unsigned int res = 0, pow;

	if (!b)
	{
		return (0);
	}

	for (i = 0; b[i]; i++)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
	}

	for (i = i - 1, j = 0; i >= 0; i--, j++)
	{
		pow = 1;
		n = j + 1;
		while (--n)
		{
			pow *= 2;
		}
		res += (b[i] - 48) * pow;
	}

	return (res);
}
