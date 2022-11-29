#include "3-calc.h"

/**
 * op_add - add the two integers
 *
 * @a: first integer
 * @b: second integer
 *
 * Return: result.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtract the two integers
 *
 * @a: first integer
 * @b: second integer
 *
 * Return: result.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiply the two integers
 *
 * @a: first integer
 * @b: second integer
 *
 * Return: result.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divide the two integers
 *
 * @a: first integer
 * @b: second integer
 *
 * Return: result.
 */
int op_div(int a, int b)
{
	if (!b)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - find the modulo of the two integers
 *
 * @a: first integer
 * @b: second integer
 *
 * Return: result.
 */
int op_mod(int a, int b)
{
	if (!b)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
