#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (sucess)
 */
int main(void)
{
	int i, n;

	for (i = 48; i < 58; i++)
	{
		putchar((char) i);
	}

	n  = 10;
	putchar((char) n);

	return (0);
}
