#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (sucess)
 */
int main(void)
{
	int comma, i, j, k, newline, space;

	for (i = 48; i < 58; i++)
	{
		for (j = i + 1; j < 58; j++)
		{
			for (k = j + 1; k < 58; k++)
			{
				putchar((char) i);
				putchar((char) j);
				putchar((char) k);

				if (i < 55 || j < 56 || k < 57)
				{
					comma = 44;
					putchar((char) comma);

					space = 32;
					putchar((char) space);
				}
			}
		}
	}

	newline  = 10;
	putchar((char) newline);

	return (0);
}
