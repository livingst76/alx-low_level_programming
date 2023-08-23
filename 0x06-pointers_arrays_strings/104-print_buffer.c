#include "main.h"
#include <ctype.h>
#include <stdio.h>

/**
 * print_buffer - prints the content of a buffer 10 bytes per line;
 *                hexadecimal position of the first byte of each line;
 *                hexadecimal content (2 chars) of the buffer, 2 bytes at a go
 *                displays special (unprintable) characters as '.'
 *
 * @b: buffer
 * @size: buffer's size
 */
void print_buffer(char *b, int size)
{
	int i = 0, n = 0;
	char d = '.';

	if (size <= 0)
		printf("\n");
	while (size > 0 && i < size)
	{
		n = i;
		printf("%08x: ", n);
		for (i = n; i < n + 10; i++)
		{
			if (i < size)
			{
				printf("%02x", b[i]);
				if (i % 2 == 1)
					printf(" ");
			}
			else
			{
				printf("  ");
				if (i % 2 == 1)
					printf(" ");
			}
		}
		for (i = n; i < n + 10 && i < size; i++)
		{
			if (i == n)
			{
				if (isprint(b[i]))
					printf("%1c", b[i]);
				else
					printf("%1c", d);
			}
			else if (isprint(b[i]))
				printf("%c", b[i]);
			else
				printf("%c", d);
		}
		printf("\n");
	}
}
