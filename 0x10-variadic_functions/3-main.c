#include "variadic_functions.h"
#include <stddef.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_all("ceifdddddggtgtrtryrss", 'B', 3, NULL, "stSchool", NULL);
	print_all("ceifsfgqwigh", 'B', 3, 3.0, "stSchool", 5.0, 10);
	print_all("ceifsfeigh", 'B', 3, 3.0, "stSchool", 5.0, 10);
    return (0);
}
