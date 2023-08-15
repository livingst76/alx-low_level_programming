#include "main.h"

void digits(int i, int  j, int n);

/**
 * print_times_table - displays multiplaction tables up to n
 *
 * @n: a positive integer
 *
 * Return: returns no value
 */
void print_times_table(int n)
{
	int i, j;

	if (n == 0)
	{
		_putchar('0');
		_putchar('\n');
	}
	else if (n < 16 && n > 0)
	{
		for (i = 0; i < n + 1; i++)
		{
			for (j = 0; j < n + 1; j++)
			{
				digits(i, j, n);
			}
			_putchar('\n');
		}
	}
}

/**
 * digits - create each row of multiplication table
 *
 * @i: multiplier
 *
 * @j: multiplicand
 *
 * @n: highest multiplier
 *
 * Return: returns no value
 */
void digits(int i, int j, int n)
{
	int result = i * j;

	if (result < 10 && j > 0)
	{
		_putchar(' ');
		_putchar(' ');
		_putchar(' ');
		_putchar(result + '0');
		if (j < n)
		{
			_putchar(',');
		}
	}
	else if (result > 9 && j > 0)
	{
		_putchar(' ');
		if (result < 100)
		{
			_putchar(' ');
			_putchar((result / 10) + '0');
		}
		else
		{
			_putchar((result / 100) + '0');
			_putchar(((result / 10) % 10) + '0');
		}

		_putchar((result % 10) + '0');

		if (j < n)
		{
			_putchar(',');
		}
	}
	else
	{
		_putchar('0');
		_putchar(',');
	}
}
