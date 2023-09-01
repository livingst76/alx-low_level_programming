#include "main.h"

/**
 * _isupper - check for uppercase alphabet
 *
 * @c: alphabet to be checked
 *
 * Return: boolean
 */
int _isupper(int c)
{
	int boolean, i;

	boolean = 0;

	for (i = 65; i < 91; i++)
	{
		if (c == i)
		{
			boolean = 1;
			break;
		}
	}

	return (boolean);
}
