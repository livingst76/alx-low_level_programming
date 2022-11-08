#include "main.h"

/**
 * print_chessboard - print the chessboard
 *
 * @a: string of chessboard
 */
void print_chessboard(char (*a)[8])
{
	int i = 0, j = 1;

	for (i = 0; i < j; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
