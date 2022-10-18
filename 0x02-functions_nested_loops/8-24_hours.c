#include "main.h"

/**
 * jack_bauer - prints every minute in a day from 00:00 to 23:59
 *
 * Return: returns no value
 */
void jack_bauer(void)
{
	int c[5], i, j, k, l, m;

	for(i = 0; i < 3; i++)
	{
		c[0] = i;
		for(j = 0; j < 4; j++)
		{
			c[1] = j;
			for(k = 0; k < 6; k++)
			{
				c[3] = k;
				for(l = 0; l < 10; l++)
				{
					c[4] = l;
					for(m = 0; m < 5; m++)
					{
						if (m != 2)
						{
							_putchar(c[m] + '0');
						}
						else
						{
							_putchar(':');
						}
					}
					_putchar('\n');
				}
			}
		}
	}
}
