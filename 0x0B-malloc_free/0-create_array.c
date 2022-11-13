#include "main.h"
#include <stdlib.h>

/**
 * create_array - create an array of chars; initialise it with a given char
 *
 * @size: size of array
 * @c: given char
 *
 * Return: pointer to array
 */
char *create_array(unsigned int size, char c)
{
	char *b;

	b = malloc(size);
	while(size)
	{
		size--;
		b[size] = c;
	}
	return (b);
}
