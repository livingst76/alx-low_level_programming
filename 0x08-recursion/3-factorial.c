#include "main.h"

/**
 * factorial - calculate the factorial of a postive integer
 *
 * @n: integer
 *
 * Return: r, result; -1 if number is less than zero
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
