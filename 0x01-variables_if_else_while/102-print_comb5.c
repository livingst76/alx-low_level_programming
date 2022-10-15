#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (sucess)
 */
int main(void)
{
	int comma, i, j, k, l, n,  newline, space;

	for (i = 48; i < 58; i++)
	{
		for (j = 48; j < 58; j++)
		{
			n = j + 1;
			for (k = i; k < 58; k++)
			{
				for (l = n; l < 58; l++)
				{
					putchar((char) i);
					putchar((char) j);

					space = 32;
					putchar((char) space);

					putchar((char) k);
					putchar((char) l);

					if (i != 57 || j != 56 || k != 57 || l != 57)
					{
						comma = 44;
						putchar((char) comma);

						putchar((char) space);
					}
				}

				n = 48;
			}
		}
	}

	newline  = 10;
	putchar((char) newline);

	return (0);
}
