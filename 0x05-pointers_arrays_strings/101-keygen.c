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
	n = rand() - RAND_MAX / 2;
	printf("%u\n", n);

	return (0);
}
