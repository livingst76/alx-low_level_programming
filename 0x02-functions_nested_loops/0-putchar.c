#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (sucess)
 */
int main(void)
{
	int i;

	char c[8] = "_putchar";
	char v = '\n';

	for (i = 0; i < 8; i++)
	{
		_putchar(c[i]);
	}

	_putchar(v);

	return (0);
}
