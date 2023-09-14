#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_all - print any of the four major data types:
 *             char, int, float, and char * (string).
 *
 * @format: format specifier of data types listed above.
 *
 * Return: nothing.
 */
void print_all(const char * const format, ...)
{
	unsigned int i = 0, valid = 0;
	va_list ap;

	va_start(ap, format);

	while (format[i])
	{
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(ap, int));
			valid = 1;
			break;
		case 'i':
			printf("%i", va_arg(ap, int));
			valid = 1;
			break;
		case 'f':
			printf("%f", va_arg(ap, double));
			valid = 1;
			break;
		case 's':
			print_string(va_arg(ap, char *));
			valid = 1;
			break;
		default:
			valid = 0;
			break;
		}
		i++;

		/* Does not work as intended if last format is invalid */
		if (format[i] && valid)
		{
			printf(", ");
		}
	}
	va_end(ap);
	putchar('\n');
}

/**
 * print_string - print the string.
 *
 * @str: string.
 *
 * Return: nothing.
 */
void print_string(char *str)
{
	if (!str)
	{
		str = "(nil)";
	}
	printf("%s", str);
}
