#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (sucess)
 */
int main(void)
{
	int c, i, n, s;

	for (i = 48; i < 58; i++)
	{
		putchar((char) i);

		if (i < 57)
		{
			c = 44;
			putchar((char) c);

			s = 32;
			putchar((char) s);
		}
	}

	n  = 10;
	putchar((char) n);

	return (0);
}
