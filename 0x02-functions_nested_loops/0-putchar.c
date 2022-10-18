#include "main.h"

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
		_putchar(c);
	}

	v = '\n';
	_putchar(v);

	return (0);
}
