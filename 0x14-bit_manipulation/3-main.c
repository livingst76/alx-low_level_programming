#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    unsigned long int n;
	int t;

    n = 1024;
    set_bit(&n, 6);
    printf("%lu\n", n);
    n = 0;
	t = set_bit(&n, 10);
    printf("%lu\n%i\n", n, t);
    n = 98;
    t = set_bit(&n, -1);
    printf("%lu\n%i\n", n, t);
    return (0);
}
