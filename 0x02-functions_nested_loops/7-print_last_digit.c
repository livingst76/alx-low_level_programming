#include "main.h"

/**
 *  print_last_digit - prints the last digit in an integer
 *
 * @n: integer
 *
 * Return: returns l, last digit
 */
int print_last_digit(int n)
{
	int l, t;
	char c;

	t = n % 10;

	if (t < 0)
	{
		l = t * -1;
		c = l + '0';
	}
	else
	{
		l = t;
		c = l + '0';
	}

	_putchar(c);

	return (l);
}
