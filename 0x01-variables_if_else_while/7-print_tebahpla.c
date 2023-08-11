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

	for (i = 122; i > 96; i--)
	{
		c = i;
		putchar(c);
	}

	v = '\n';
	putchar(v);

	return (0);
}
