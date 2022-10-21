#include "main.h"

/**
 * times_table - displays multiplaction table 9
 * with dimension 10 x 10
 *
 * Return: returns no value
 */
void times_table(void)
{
	int digit1, digit2, i, j, result;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			result = i * j;
			if (result < 10 && j > 0)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(result + '0');
				if (j < 9)
				{
					_putchar(',');
				}
			}
			else if (result > 9 && j > 0)
			{
				digit1 = result / 10;
				digit2 = result % 10;

				_putchar(' ');
				_putchar(digit1 + '0');
				_putchar(digit2 + '0');
				if (j < 9)
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
		_putchar('\n');
	}
}
