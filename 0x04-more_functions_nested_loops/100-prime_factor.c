#include <stdio.h>

/**
 * main - calculate the highest prime factor of 612852475143
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	unsigned long i, j, n;
	int boolean;

	n = 612852475143;

	while (n > 1)
	{
		for (i = 2; i < n + 1; i++)
		{
			boolean = 1;

			if (n % i == 0)
			{
				for (j = 2; j < i; j++)
				{
					if (i % j == 0)
					{
						boolean = 0;
						break;
					}
				}

				if (boolean)
				{
					n = n / i;
					break;
				}
			}
		}
	}

		printf("%lu\n", i);
	return (0);
}
