#include "main.h"

/**
 * _isupper - check the case of a character
 *
 * @c: character
 *
 * Return: 1 if uppercase, 0 if lowercase
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
