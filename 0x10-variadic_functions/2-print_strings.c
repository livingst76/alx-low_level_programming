#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - print strings; terminate with a new line.
 *
 * @separator: string to be printed betweeen strings (comma, e.t.c.)
 * @n: number of strings to be passed to the function.
 *
 * Return: nothing.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list ap;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(ap, char *);
		if (str)
		{
			printf("%s", str);
		}
		else
		{
			printf("(nil)");
		}

		/* Check if seaparator is valid; output no separator for last string */
		if (i < n - 1 && separator)
		{
			printf("%s", separator);
		}
	}
	putchar('\n');

	va_end(ap);
}
