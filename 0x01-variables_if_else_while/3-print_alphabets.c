#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (sucess)
 */
int main(void)
{
	int i;
	char c, d, v;

	for (i = 97; i < 123; i++)
	{
		c = i;
		putchar(c);
	}

	for (i = 65; i < 91; i++)
	{
		d = i;
		putchar(d);
	}

	v = '\n';
	putchar(v);

	return (0);
}
