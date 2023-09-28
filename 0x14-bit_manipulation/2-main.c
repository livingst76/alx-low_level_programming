#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int n;
	/*unsigned int i;*/

    n = get_bit(1024, 9);
    printf("%d\n", n);
    n = get_bit(98, 1);
    printf("%d\n", n);
    n = get_bit(7, 0);
    printf("%d\n", n);
	/*for (i = 0; i < 7; i++)
	{
		n = get_bit(98, i);
		printf("%d\n", n);
		}*/
	n = get_bit(6, 1);
    printf("%d\n", n);
    return (0);
}
