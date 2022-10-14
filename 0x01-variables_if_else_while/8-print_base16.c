#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (sucess)
 */
int main(void)
{
	int i;
	char c, v;

	for (i = 48; i < 58; i++)
	{
		c = i;
		putchar(c);
	}

	for (i = 97; i < 103; i++)
	{
		c = i;
		putchar(c);
	}

	v  = '\n';
	putchar(v);

	return (0);
}
