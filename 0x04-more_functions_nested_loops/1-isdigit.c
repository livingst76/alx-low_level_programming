#include "main.h"

/**
 * _isdigit - check for digits/decimals
 *
 * @c: character to be checked
 *
 * Return: returns boolean
 */
int _isdigit(int c)
{
	int boolean, i;

	boolean = 0;

	for (i = 48; i < 58; i++)
	{
		if (c == i)
		{
			boolean = 1;
			break;
		}
	}

	return (boolean);
}
