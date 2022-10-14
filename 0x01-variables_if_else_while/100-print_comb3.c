#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (sucess)
 */
int main(void)
{
	int comma, i, j, newline, space;

	for (i = 48; i < 58; i++)
	{
		for (j = i + 1; j < 58; j++)
		{
			putchar((char) i);
			putchar((char) j);

			if (i < 56 || j < 57)
			{
				comma = 44;
				putchar((char) comma);

				space = 32;
				putchar((char) space);
			}
		}
	}

	newline  = 10;
	putchar((char) newline);

	return (0);
}
