#include "main.h"

/**
 * is_palindrome - check if the string is empty(a palindrome)
 *
 * @s: string to be checked
 *
 * Return: 1, palindrome else, 0
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1);
}
