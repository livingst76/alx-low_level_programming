#include <stdio.h>
#include "main.h"

/**
 * main - prints "_putchar"
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char buffer[9] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
		_putchar(buffer[i]);
	_putchar('\n');

	return (0);
}
