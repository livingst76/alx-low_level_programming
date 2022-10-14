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

	for (i = 97; i < 123; i++)
	{
		c = i;

		if (i != 101 && i != 113)
		{
			putchar(c);
		}
	}

	v = '\n';
	putchar(v);

	return (0);
}
