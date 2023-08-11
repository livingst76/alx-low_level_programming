#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (sucess)
 */
int main(void)
{
	int comma, i, n, space;

	for (i = 48; i < 58; i++)
	{
		putchar((char) i);

		if (i < 57)
		{
			comma = 44;
			putchar((char) comma);

			space = 32;
			putchar((char) space);
		}
	}

	n  = 10;
	putchar((char) n);

	return (0);
}
