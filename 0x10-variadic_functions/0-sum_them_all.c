#include <stdarg.h>

/**
 * sum_them_all - sum up all variadic parameters of type int (integers).
 *
 * @n: number of variadic parameters.
 *
 * Return: result of summation.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	unsigned long int sum = 0;
	va_list ap;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(ap, int);
	}
	va_end(ap);

	return (sum);
}
