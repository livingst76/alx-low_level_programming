#include "main.h"

/**
 * _isalpha - checks if character is an alphabet
 *
 * @c: The integer conversion of the character to be checked
 *
 * Return: 1 if it is an alphabet else 0
 */
int _isalpha(int c)
{
	if ((c > 64 && c < 91) || (c > 96 && c < 123))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
