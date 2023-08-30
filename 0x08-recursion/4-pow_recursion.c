/**
 * _pow_recursion - calculate power of number raised to another number.
 *
 * @x: number.
 * @y: power of x.
 *
 * Return: value of x raised to the power of y. -1 if y is less than 0.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
