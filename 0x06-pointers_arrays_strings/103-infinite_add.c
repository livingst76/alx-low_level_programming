#include "main.h"
#include <stdio.h>

/**
 * infinite_add - add two strings of numbers
 *
 * @n1: first string of numbers
 * @n2: second string of numbers
 * @r: buffer to store result of addition
 * @size_r: buffer size
 *
 * Return: r
 *
 * Note: works only for positive numbers
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int carry = 0, i, len1 = 0, len2 = 0, n;

	while (*(n1 + len1) != '\0'  || *(n2 + len2) != '\0')
	{
		if (n1[len1] != '\0')
			len1++;
		if (n2[len2] != '\0')
			len2++;
	}
	if (len1 >= size_r  || len2 >= size_r || len1 == size_r - 1)
		return (r = NULL);
	for (n = len1, r[n + 1] = '\0' ; len1 >= 1 ||  len2 >= 1; n--)
	{
		if (len2 < 1)
		{
			r[n] = 48 + (((carry + n1[len1 - 1]) - 48) % 10);
			carry = ((carry + n1[len1 - 1]) - 48) / 10;
		}
		else
		{
			r[n] = 48 + (((carry + n1[len1 - 1] + n2[len2 - 1]) - 96) % 10);
			carry = ((carry + n1[len1 - 1] + n2[len2 - 1]) - 96) / 10;
		}
		if (len1 >= 0)
			len1--;
		if (len2 >= 0)
			len2--;
	}
	if (carry > 0)
		r[0] = '1';
	else
	{
		for (i = 0; r[i + 1] != '\0'; i++)
			r[i] = r[i + 1];
		r[i] = '\0';
	}
	return (r);
}
