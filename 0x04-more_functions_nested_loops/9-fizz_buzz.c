#include <stdio.h>

/**
 * main - print 1-100, Fizz for multiples of 5, Buzz for multiples of 3,
 * and FizzBuzz for multiples of both
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;

	for (i = 1; i < 101; i++)
	{
		if (i < 100)
		{
			if (i % 3 == 0 && !(i % 5 == 0))
			{
				printf("Fizz ");
			}
			else if (i % 5 == 0 && !(i % 3 == 0))
			{
				printf("Buzz ");
			}
			else if (i % 5 == 0 && i % 3 == 0)
			{
				printf("FizzBuzz ");
			}
			else
			{
				printf("%i ", i);
			}
		}
		else
		{
			printf("Buzz\n");
		}
	}
	return (0);
}
