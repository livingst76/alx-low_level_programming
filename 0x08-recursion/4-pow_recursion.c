#include "main.h"

/**
 * _pow_recursion - calculate the result of a positive integer
 *                  raised to the power of an other
 *
 * @x: integer to be raised
 * @y: power
 *
 * Return: value of x rasied to the power of y;
 *         -1 if y is less than 0;
 *         and 1 if y is equal to zero
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
