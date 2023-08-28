#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s = "hello, sdkjjjjjworlddksjjjjjjjj";
    char *f = "world";
    char *t, *r, *v;

    t = _strstr(s, f);
	if (t)
	{
		printf("%s\n", t);
	}

	r = "God be praised";
	v = "be r";
	t = _strstr(r, v);
	if (t)
	{
		printf("%s\n", t);
	}
    return (0);
}
