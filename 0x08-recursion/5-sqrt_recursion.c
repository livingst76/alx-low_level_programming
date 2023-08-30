int actual_sqrt(int n, int i);
/**
 * _sqrt_recursion - calcuate the natural square root of a  n integer
 *
 *
 * @n: integer
 *
 * Return: sr, natural square root; -1 if integer has no natural square root
 */
int _sqrt_recursion(int n)
{
	int sr;

	if (n < 0)
		return (-1);
	sr = actual_sqrt(n, 0);
	if (sr > 0)
		return (sr);
	else
		return (-1);
}

/**
 * actual_sqrt - calculate the actual square root
 *
 * @n: integer
 * @i: possible square root
 *
 * Return: t, natural square root, 0 if none
 */
int actual_sqrt(int n, int i)
{
	int t;

	if (i * i == n)
	{
		t = n / i;
		return (t);
	}
	else
		t = 0;
	if (i > n)
		return (0);
	t = actual_sqrt(n, i + 1);

	return (t);
}
