#include "main.h"

/**
 * _islower - checks if alphabet is in lowercase
 *
 * Return: 1 if alphabet is lowercase else 0
 */
int _islower(int c)
{
	if (c > 96 && c < 123)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
