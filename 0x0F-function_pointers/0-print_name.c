#include "function_pointers.h"

/**
 * print_name - print the name
 *
 * @name: pointer to the string of the name to be printed
 * @f: function to convert name to uppercase and print it
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
