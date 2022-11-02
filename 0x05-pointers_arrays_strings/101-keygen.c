#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - generates random valid passwords
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	unsigned int n;

	srand(time(0));
	n = rand();
	printf("%u\n", n);

	return (0);
}
