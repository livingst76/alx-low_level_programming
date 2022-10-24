#include <stdio.h>

/**
 * main - print the first 50 fibonacci numbers
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	unsigned long fib1, n1 = 0, n2 = 1;
	int i, fib2, n3, n4;

	for (i = 2; i < 100; i++)
	{
		if (i < 93)
		{
			fib1 = n2 + n1;
			n1 = n2;
			n2 = fib1;
			printf("%lu, ", fib1);
		}
		else
		{
			if (i == 93)
			{
				n3 = n1 / 1000000000000000000;
				n4 = n2 / 1000000000000000000;
			}
			n1 = n1 % 1000000000000000000;
			n2 = n2 % 1000000000000000000;
			fib1 = n1 + n2;
			fib2 = n3 + n4 + (fib1 / 1000000000000000000);
			n1 = n2;
			n2 = fib1 % 1000000000000000000;
			n3 = n4;
			n4 = fib2;
			if (i < 99)
			{
				printf("%i", fib2);
				printf("%lu, ", fib1 % 1000000000000000000);
			}
			else
			{
				printf("%i", fib2);
				printf("%lu\n", fib1 % 1000000000000000000);
			}
		}
	}
	return (0);
}
