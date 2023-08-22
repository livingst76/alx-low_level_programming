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
	char pass[60] = "\0";
	char h[63] = "abcdefghijklmnopqrstuvwxyz0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int s = 0, i = 0, tempo = 0;

	srand(time(NULL));
	while (s < 2772 - 'z')
	{
		tempo = rand() % 62;
		s += h[tempo];
		pass[i++] = h[tempo];
	}

	pass[i] = (2772 - s);
	pass[i + 1] = '\0';

	printf("%s", pass);
	return (0);
}
