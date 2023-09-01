#include "main.h"

/**
 * _strlen - check the length of a string
 *
 * @s: text string
 *
 * Return: len, the length of the string
 */
int _strlen(char *s)
{
	char *p;
	int len = 0;

	p = s;

	while (*p != '\0')
	{
		len++;
		p++;
	}
	return (len);
}
