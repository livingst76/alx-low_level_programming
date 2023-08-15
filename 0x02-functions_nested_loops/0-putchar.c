#include "main.h"

/**
 * main - prints alphabets
 *
 * Return: Always 0 (sucess)
 */
int main(void)
{
	int i;

	char c[9] = "_putchar";

	for (i = 0; i < 8; i++)
	{
		_putchar(c[i]);
	}
	_putchar('\n');

	return (0);
}
