/**
 * _abs - calculates the absolute value of an integer
 *
 * @n: the integer to be calculated
 *
 * Return: returns n, the absolute value of the integer
 */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (n * (-1));
	}
}
