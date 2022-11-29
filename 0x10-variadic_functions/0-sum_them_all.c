#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - find the sum of a specified number of parameters
 *
 * @n: number of parameters to be passed into function
 *
 * Return: result, 0 if  n == 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	int sum = 0;

	if (!n)
		return (0);

	va_start(ap, n);

	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);

	va_end(ap);
	return (sum);
}
