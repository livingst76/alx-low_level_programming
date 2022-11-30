#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - print all the arguments passed to the function
 *
 * @format: string of data types passed as arguments.
 */
void print_all(const char * const format, ...)
{
	va_list ls;
	const char *_type = "cifs";
	char *s;
	int bn = 0, n = 0, m;

	va_start(ls, format);
	while (format && format[n])
	{
		m = 0;
		while (_type[m])
		{
			if (format[n] == _type[m] && bn)
				printf(", ");
			m++;
		}
		switch (format[n])
		{
		case 'c':
			printf("%c", va_arg(ls, int)), bn = 1;
			break;
		case 'i':
			printf("%i", va_arg(ls, int)), bn = 1;
			break;
		case 'f':
			printf("%f", va_arg(ls, double)), bn = 1;
			break;
		case 's':
			s = va_arg(ls, char *), bn = 1;
			if (!s)
			{
				printf("(nil)");
				break;
			}
			printf("%s", s);
			break;
		}
		n++;
	}
	printf("\n");
}
