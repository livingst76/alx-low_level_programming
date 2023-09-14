#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - print numbers; terminate with a new line.
 *
 * @separator: string to be printed betweeen numbers (comma,...)
 * @n: number of integers passed to the function.
 *
 * Return: nothing.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		printf("%i", va_arg(ap, int));

		/* Check if seaparator is valid; output no separator for the last num*/
		if (i < n - 1 && separator)
		{
			printf("%s", separator);
		}
	}
	putchar('\n');

	va_end(ap);
}
