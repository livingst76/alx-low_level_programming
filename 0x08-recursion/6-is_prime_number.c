int primality(int n, int i);
/**
 * is_prime_number - check if the number is prime
 *
 * @n: number
 *
 * Return: 1 if number is prime else 0
 */
int is_prime_number(int n)
{
	int t;

	if (n < 2)
		return (0);

	t = primality(n, 1);
	if (t)
		return (1);
	else
		return (0);
}

/**
 * primality - test number for primality
 *
 * @n: number to be tested
 * @i: values to be tested against
 *
 * Return: 0, non-primality; 1, primality
 */
int primality(int n, int i)
{
	int boolean = 1, t;

	if (i > n - 1)
		return (1);

	t = primality(n, i + 1);
	if (!(n % i) && i > 1)
		boolean = 0;
	if (!t)
		return (t);
	return (boolean);
}
