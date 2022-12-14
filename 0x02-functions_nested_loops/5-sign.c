#include "main.h"

/**
 * print_sign - check the sign of an integer
 *
 * @n: The integer to be checked
 *
 * Return: returns 1 if sign is postive; 0 if sign is zero, else -1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
