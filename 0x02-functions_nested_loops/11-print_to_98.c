#include <stdio.h>

/**
 * print_to_98 - prints numbers from an integer to 98
 *
 * @n: The integer to begin the print from
 *
 * Return: returns no value
 */
void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			if (i != 98)
			{
				printf("%i, ", i);
			}
			else
			{
				printf("%i\n", i);
			}
		}
	}
	else if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			if (i != 98)
			{
				printf("%i, ", i);
			}
			else
			{
				printf("%i\n", i);
			}
		}
	}
	else
	{
		printf("%i\n", n);
	}
}
